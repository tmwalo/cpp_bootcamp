#ifndef NAMEMODULE_H
#define NAMEMODULE_H
#include <iostream>
#include "IMonitorModule.hpp"

class NameModule : public IMonitorModule
{
    public:
        NameModule();
        NameModule(std::string name);
        NameModule(NameModule const & src);
		NameModule & operator=(NameModule const & rhs);
        ~NameModule();
        void getData();
        std::string getName() const;
        std::vector <std::string>getInfo() const;
    
    protected:

    private:
};

#endif