#include "NetModule.hpp"

NetModule::NetModule(): IMonitorModule(){}

NetModule::NetModule(std::string name) : IMonitorModule(name){}

NetModule::NetModule(NetModule const & src){
    *this = src;
}

NetModule & NetModule::operator=(NetModule const & rhs){
    this->_name = rhs.getName();
    return *this;
}

std::string NetModule::getName() const{
    return this->_name;
}

void    NetModule::getData(){
    std::string line;
    system("top -n0 -l1 | grep Netw > NetMod.txt");

    std::ifstream NetMod("NetMod.txt");
    if(NetMod.is_open())
    {
        int i = 0;
        this->_info.resize(1);
        while(getline(NetMod,line))
        {
            size_t fstNoSp = line.find_first_not_of(' ');
            size_t endNoSp = line.find_last_not_of(' ');
            this->_info[i] = line.substr(fstNoSp, (endNoSp - fstNoSp +1));
            i++;
        }
        NetMod.close();
    }
    remove("NetMod.txt");
}

NetModule::~NetModule(){}

std::vector<std::string> NetModule::getInfo() const{
    return this->_info;
}
void   NetModule::setNetStats(){
    std::string line;
    system("top -n0 -l1 | grep Network >> sysNet.txt");
    std::ifstream sysStats("sysNet.txt");
    if(sysStats.is_open())
    {
        getline(sysStats, line);
        std::string tmp = line.substr(line.find_last_of(":") + 1, line.length());
        std::string dwnload = tmp.substr(1, tmp.find_first_of('/') - 1);

        std::string tmp1 = line.substr(line.find_first_of(",") + 1);
        std::string upload = tmp1.substr(1, tmp1.find_last_of('/') - 1);

        // values are in bits. divide by 10 000 --- in is down | out is upld
        int up = static_cast<int>(roundf(std::stod(upload)));
        int down = static_cast<int>(roundf(std::stod(dwnload)));
        this->_upld = up;
        this->_dwnld = down;
        sysStats.close();
    }
    remove("sysNet.txt");
}


int NetModule::getUpld(){
    return this->_upld;
}

int NetModule::getDwnld(){
    return this->_dwnld;
}