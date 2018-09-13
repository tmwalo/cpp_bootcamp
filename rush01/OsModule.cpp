#include "OsModule.hpp"

OsModule::OsModule(): IMonitorModule(){}

OsModule::OsModule(std::string name) : IMonitorModule(name){}

OsModule::OsModule(OsModule const & src){
    *this = src;
}

OsModule & OsModule::operator=(OsModule const & rhs){
    this->_name = rhs.getName();
    return *this;
}

std::string OsModule::getName() const{
    return this->_name;
}

void    OsModule::getData(){
    std::string line;
	    system("sw_vers | grep 'ProductName' > OsMod.txt");
        system("sw_vers | grep 'ProductVersion' >> OsMod.txt");
    std::ifstream OsMod("OsMod.txt");
    if(OsMod.is_open())
    {
        int i = 0;
        this->_info.resize(2);
        while(getline(OsMod,line))
        {
            size_t fstNoSp = line.find_first_not_of(' ');
            size_t endNoSp = line.find_last_not_of(' ');
            this->_info[i] = line.substr(fstNoSp, (endNoSp - fstNoSp +1));
            i++;
        }
        OsMod.close();
    }
    remove("OsMod.txt");
}

OsModule::~OsModule(){}

std::vector<std::string> OsModule::getInfo() const{
    return this->_info;
}