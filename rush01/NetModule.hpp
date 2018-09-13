#ifndef NETMODULE_H
#define NETMODULE_H
#include <iostream>
#include "IMonitorModule.hpp"

class NetModule : public IMonitorModule
{
    public:
        NetModule();
        NetModule(std::string name);
        NetModule(NetModule const & src);
		NetModule & operator=(NetModule const & rhs);
        ~NetModule();
        void getData();
        void setNetStats();
        int  getUpld();
        int  getDwnld();
        std::string getName() const;
        std::vector <std::string>getInfo() const;
    
    protected:

    private:
        int _upld;
        int _dwnld;
};

#endif