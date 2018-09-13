#ifndef OSMODULE_H
#define OSMODULE_H
#include <iostream>
#include "IMonitorModule.hpp"

class OsModule : public IMonitorModule
{
    public:
        OsModule();
        OsModule(std::string name);
        OsModule(OsModule const & src);
		OsModule & operator=(OsModule const & rhs);
        ~OsModule();
        void getData();
        std::string getName() const;
        std::vector <std::string>getInfo() const;
    
    protected:

    private:
};

#endif