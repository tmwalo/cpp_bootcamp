#include <iostream>
#include <vector>
#include <ncurses.h>
#include  "RamModule.hpp"
#include "NameModule.hpp"
#include "OsModule.hpp"
#include "DtModule.hpp"
#include "CpuModule.hpp"
#include "RamModule.hpp"
#include "NetModule.hpp"

int     main()
{
    NameModule names("usr+host");
    DtModule dateNtime("now");
    OsModule opSyst("macInfo");
    NetModule NetSt("connStats");
    CpuModule cProc("cpu");
    RamModule memSt("remember");

    initscr();
    noecho();
    cbreak();
    start_color();
    curs_set(0);

    WINDOW * specswin = newwin(7, 40, 1, 1);
    refresh();

    WINDOW * useWin = newwin(6, 22, 8, 1);
    refresh();

    WINDOW * netWin = newwin(4, 25 , 16, 1);
    refresh();

    box(specswin, '|','-');
    box(useWin, '/', '=');
    box(netWin, '*', '*');

    int goOut = getch();

    while(goOut != 'q')
    {
        dateNtime.getData();
        std::vector <std::string> myTime = dateNtime.getInfo();
        //Date and time
        mvwprintw(specswin, 1, 1, "Time: ");
        mvwprintw(specswin, 1, 7, myTime[0].c_str());
        wrefresh(specswin);

        //OS info
        opSyst.getData();
        std::vector <std::string> myOs = opSyst.getInfo();

        mvwprintw(specswin, 2, 1, myOs[0].c_str());
        mvwprintw(specswin, 3, 1, myOs[1].c_str());
        wrefresh(specswin);

        //For Host and user name:
        names.getData();
        std::vector <std::string> myNames = names.getInfo();

        mvwprintw(specswin, 4, 1, "Hostname: ");
        mvwprintw(specswin, 4, 11, myNames[0].c_str());
        mvwprintw(specswin, 5, 1, "Username: ");
        mvwprintw(specswin, 5, 11, myNames[1].c_str());
        wrefresh(specswin);
        
        NetSt.getData();
        NetSt.setNetStats();
        refresh();
  
  //New window
        //For CPU:
        //system
        cProc.setCPUStats();
        int   sys = cProc.getSys();
        mvwprintw(useWin, 1, 1, "********CPU********");
        mvwprintw(useWin, 2, 1, "System usage: ");
        mvwprintw(useWin, 2, 17, std::to_string(sys).c_str());
        mvwprintw(useWin, 2, 19, "%%");
        wrefresh(useWin);

        //idle
        int   idl = cProc.getIdle();
        mvwprintw(useWin, 3, 1, "Idle usage: ");
        mvwprintw(useWin, 3, 17, std::to_string(idl).c_str());
        mvwprintw(useWin, 3, 19, "%%");
        wrefresh(useWin);

        //User
        int   us = cProc.getSys();
        mvwprintw(useWin, 4, 1, "User usage: ");
        mvwprintw(useWin, 4, 17, std::to_string(us).c_str());
        mvwprintw(useWin, 4, 19, "%%");
        wrefresh(useWin);

    //New window
        //For network:
        mvwprintw(netWin, 1, 1, "********Net********");
        mvwprintw(netWin, 2, 1, "System usage: ");
        mvwprintw(netWin, 2, 17, std::to_string(sys).c_str());
        mvwprintw(netWin, 2, 19, "%%");
    }
    getch();

    endwin();
    
    return 0;
}
