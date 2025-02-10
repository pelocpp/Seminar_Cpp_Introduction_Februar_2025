#include <iostream>

#include "Time.h"

extern int n_global;

void useGlobal()
{
    n_global = 456;
}

void localVariable()
{
    int n = 123;
    // ....
    std::cout << n;
}

void displayTime(Time time)
{
    std::cout << time.getHours();
    std::cout << ":";
    std::cout << time.getMinutes();
    std::cout << ":";
    std::cout << time.getSeconds();
    std::cout << "\n";
}

void resetTime(Time time)
{
    time.setHours(0);
    time.setMinutes(0);
    time.setSeconds(0);
}

void resetTimeZwei(Time* time)
{
    //time.setHours(0);
    //time.setMinutes(0);
    //time.setSeconds(0);

    (*time).setHours(0);
    (*time).setMinutes(0);
    (*time).setSeconds(0);
}

void testDisplayTime()
{
    Time now;

    now.setHours(13);
    now.setMinutes(47);
    now.setSeconds(10);

    displayTime(now);

    resetTime(now);
    displayTime(now);

    resetTimeZwei(&now);
    displayTime(now);
}

void test_zeiger()
{
    int n = 123;

    int* pi;   // Vereinbarung

    pi = &n;   // Adresse - von

    // Anweisung // Wertzuweisung
    // n den Wert 456 zuweisen, ohne den Bezeichner n zu verwenden
    *pi = 456;  // Wert - an (schreiben) // Wert von (lesen)
}

// ========================================

void tausche(int x, int y)
{
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}

void test_tausche()
{
    int n = 5;
    int m = 6;

    std::cout << "Vorher:  " << n << ", " << m << "\n";
    tausche(n, m);
    std::cout << "Nachher: " << n << ", " << m << "\n";
}