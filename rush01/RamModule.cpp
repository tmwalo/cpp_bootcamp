#include "RamModule.hpp"

RamModule::RamModule(): IMonitorModule(){}

RamModule::RamModule(std::string name) : IMonitorModule(name){}

RamModule::RamModule(RamModule const & src){
    *this = src;
}

RamModule & RamModule::operator=(RamModule const & rhs){
    this->_name = rhs.getName();
    return *this;
}

std::string RamModule::getName() const{
    return this->_name;
}

void    RamModule::getData(){
    std::string line;
    system("/usr/sbin/system_profiler SPHardwareDataType | grep Memory > RamMod.txt");
    system("top -n0 -l1 | grep PhysMem >> RamMod.txt");

    std::ifstream RamMod("RamMod.txt");
    if(RamMod.is_open())
    {
        int i = 0;
        this->_info.resize(2);
        while(getline(RamMod,line))
        {
            size_t fstNoSp = line.find_first_not_of(' ');
            size_t endNoSp = line.find_last_not_of(' ');
            this->_info[i] = line.substr(fstNoSp, (endNoSp - fstNoSp +1));
            i++;
        }
        RamMod.close();
    }
    remove("RamMod.txt");
    std::cout << "RamMod.txt removed" << std::endl;
}

RamModule::~RamModule(){}

std::vector<std::string> RamModule::getInfo() const{
    return this->_info;
}