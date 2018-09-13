#include "NameModule.hpp"

NameModule::NameModule(): IMonitorModule(){}

NameModule::NameModule(std::string name) : IMonitorModule(name){}

NameModule::NameModule(NameModule const & src){
    *this = src;
}

NameModule & NameModule::operator=(NameModule const & rhs){
    this->_name = rhs.getName();
    return *this;
}

std::string NameModule::getName() const{
    return this->_name;
}

void    NameModule::getData(){
    std::string line;
	    system("hostname > nameMod.txt");
        system("whoami >> nameMod.txt");
    std::ifstream nameMod("nameMod.txt");
    if(nameMod.is_open())
    {
        int i = 0;
        //kind of mallocing for vectors
        this->_info.resize(2);
        while(getline(nameMod,line))
        {
            size_t fstNoSp = line.find_first_not_of(' ');
            size_t endNoSp = line.find_last_not_of(' ');
            this->_info[i] = line.substr(fstNoSp, (endNoSp - fstNoSp +1));
            i++;
        }
        nameMod.close();
    }
    remove("nameMod.txt");
}

NameModule::~NameModule(){}

std::vector<std::string> NameModule::getInfo() const{
    return this->_info;
}