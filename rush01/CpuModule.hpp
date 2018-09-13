#ifndef CPUMODULE_H
#define CPUMODULE_H
#include <iostream>
#include "IMonitorModule.hpp"

class CpuModule : public IMonitorModule
{
    public:
        CpuModule();
        CpuModule(std::string name);
        CpuModule(CpuModule const & src);
		CpuModule & operator=(CpuModule const & rhs);
        ~CpuModule();
        void getData();
        int getUsr();
        int getSys();
        int getIdle();
        void setCPUStats();
        std::string getName() const;
        std::vector <std::string>getInfo() const;
    
    protected:

    private:
        int   _user;
        int   _sys;
        int   _idle;
};

#endif