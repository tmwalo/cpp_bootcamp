#include "CpuModule.hpp"

CpuModule::CpuModule(): IMonitorModule(){}

CpuModule::CpuModule(std::string name) : IMonitorModule(name){}

CpuModule::CpuModule(CpuModule const & src){
    *this = src;
}

CpuModule & CpuModule::operator=(CpuModule const & rhs){
    this->_name = rhs.getName();
    return *this;
}

std::string CpuModule::getName() const{
    return this->_name;
}

void    CpuModule::getData(){
    std::string line;
	    system("sysctl -n machdep.cpu.brand_string > CpuMod.txt");
        system("/usr/sbin/system_profiler SPHardwareDataType | grep Cores >> CpuMod.txt");
//reads result of system call into file.
    std::ifstream CpuMod("CpuMod.txt");
    if(CpuMod.is_open())
    {
        int i = 0;
        this->_info.resize(3);
        while(getline(CpuMod,line))
        {
            size_t fstNoSp = line.find_first_not_of(' ');
            size_t endNoSp = line.find_last_not_of(' ');
            this->_info[i] = line.substr(fstNoSp, (endNoSp - fstNoSp +1));
            i++;
        }
        CpuMod.close();
    }
    remove("CpuMod.txt");
    std::cout << "CpuMod.txt removed" << std::endl;
}

CpuModule::~CpuModule(){}

std::vector<std::string> CpuModule::getInfo() const{
    return this->_info;
}

void   CpuModule::setCPUStats(){
    
    std::string line;
    system("top -n0 -l1 | grep CPU >> sysStats.txt");
    std::ifstream sysStats("sysStats.txt");
    if(sysStats.is_open())
    {
        getline(sysStats, line);
        std::string tmp = line.substr(line.find_first_of(":") + 1, line.length());
        std::string user = tmp.substr(1, tmp.find_first_of('%'));
        std::string tmp1 = tmp.substr(user.length() + 8, tmp.length());
        std::string sys = tmp1.substr(0, tmp1.find_first_of('%'));
        std::string tmp2 = tmp1.substr(sys.length() + 7, tmp1.length());
        std::string idle = tmp2.substr(0, tmp2.find_first_of('%'));
        this->_user = static_cast<int>(roundf(std::stod(user)));
        this->_sys = static_cast<int>(roundf(std::stod(sys)));
        this->_idle = static_cast<int>(roundf(std::stod(idle)));
        sysStats.close();
    }
    remove("sysStats.txt");
}

int CpuModule::getUsr(){
    return this->_user;
    std::cout << _user;
}

int CpuModule::getSys(){
    return this->_sys;
}

int CpuModule::getIdle(){
    return this->_idle;
}
