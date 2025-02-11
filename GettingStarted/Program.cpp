#include <iostream>

#include "Time.h"

int n_global = 123;   // globale Variable

extern void testDisplayAndResetTime();
extern void testDisplayTime();
extern void localVariable();
extern void test_zeiger();
extern void test_reference();
extern void test_tausche();
extern void test_this();
extern void test_zeichen();
extern void test_zeichenkette();

int main()
{
    test_zeichenkette();
}



int main_operatoren()
{
    // Uhrzeiten // Objekte vergleichen: Sind zwei Uhrzeiten gleich
    Time now(9, 29, 30);
    now.print();

    Time other(17, 0, 0);
    other.print();

    bool isSame = now.equals(other);

    if (now == other) {   // besser lesbar
        std::cout << "sind gleich\n";
    }
    else {
        std::cout << "sind nicht gleich\n";
    }

    int n = 123;
    int m = 456;

    if (n == m) {
        // ......
    }


    return 0;
}





void main_this()
{
    test_this();
}

int main_alt()
{
    testDisplayTime();
    return 1;
}

int main_hello_world()
{
    std::cout << "Nochmal Hello World\n";

    return 0;
}

int main_erste_schritte_oo()
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

// zweite Schritte
int main_zweite_schritte()
{
    Time now (16, 20, 30);
    now.print();

    Time than; 
    than.print();

    return 0;
}