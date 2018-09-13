#include "DtModule.hpp"

DtModule::DtModule(): IMonitorModule(){}

DtModule::DtModule(std::string name) : IMonitorModule(name){}

DtModule::DtModule(DtModule const & src){
    *this = src;
}

DtModule & DtModule::operator=(DtModule const & rhs){
    this->_name = rhs.getName();
    return *this;
}

std::string DtModule::getName() const{
    return this->_name;
}

void    DtModule::getData(){
    std::string line;
	    system("date > DtMod.txt");
    std::ifstream DtMod("DtMod.txt");
    if(DtMod.is_open())
    {
        int i = 0;
        this->_info.resize(1);
        while(getline(DtMod,line))
        {
            size_t fstNoSp = line.find_first_not_of(' ');
            size_t endNoSp = line.find_last_not_of(' ');
            this->_info[i] = line.substr(fstNoSp, (endNoSp - fstNoSp +1));
            i++;
        }
        DtMod.close();
    }
    remove("DtMod.txt");
}

DtModule::~DtModule(){}

std::vector<std::string> DtModule::getInfo() const{
    return this->_info;
}