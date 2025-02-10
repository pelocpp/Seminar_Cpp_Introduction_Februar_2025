#include <iostream>

#include "Time.h"

int main_hello_world()
{
    std::cout << "Nochmal Hello World\n";

    return 0;
}

int main()
{
    Time now;   // <=== auch hier sollte eine sinnvolle Vorbelegung stattfinden
    //now.m_hours = 999;
    //now.m_minutes = 20;
    //now.m_seconds = 30;
    now.setHours(999);
    now.setMinutes(20);
    now.setSeconds(30);
    now.print();

   //  int wievieleStunden = now.m_hours;
    int wievieleStunden = now.getHours();

    Time pause;
    //pause.m_hours = 10;
    //pause.m_minutes = 30;
    //pause.m_seconds = 40;
    pause.setHours(10);
    pause.setMinutes(30);
    pause.setSeconds(40);
    pause.print();

    return 0;
}