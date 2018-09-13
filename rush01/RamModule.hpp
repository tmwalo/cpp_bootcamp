#ifndef RAMMODULE_H
#define RAMMODULE_H
#include <iostream>
#include "IMonitorModule.hpp"

class RamModule : public IMonitorModule
{
    public:
        RamModule();
        RamModule(std::string name);
        RamModule(RamModule const & src);
		RamModule & operator=(RamModule const & rhs);
        ~RamModule();
        void getData();
        std::string getName() const;
        std::vector <std::string>getInfo() const;
    
    protected:

    private:
        
};

#endif