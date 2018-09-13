#ifndef IMONITORMODULE_H
#define IMONITORMODULE_H
#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>

class IMonitorModule{

    public:
        IMonitorModule();
        IMonitorModule(std::string name);
        virtual ~IMonitorModule();
        virtual void    getData() = 0;

    protected:
        std::string _name;
        std::vector <std::string> _info;


    private:
        IMonitorModule( IMonitorModule const & src );
		IMonitorModule & operator=( IMonitorModule const & rhs );
};

#endif