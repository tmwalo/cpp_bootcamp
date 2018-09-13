#ifndef DTMODULE_H
#define DTMODULE_H
#include <iostream>
#include "IMonitorModule.hpp"

class DtModule : public IMonitorModule
{
    public:
        DtModule();
        DtModule(std::string name);
        DtModule(DtModule const & src);
		DtModule & operator=(DtModule const & rhs);
        ~DtModule();
        void getData();
        std::string getName() const;
        std::vector <std::string>getInfo() const;
    
    protected:

    private:
        std::string _dateNTime;
};

#endif