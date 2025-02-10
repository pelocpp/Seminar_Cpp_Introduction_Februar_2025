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

void displayTimeMitKopie(Time time)
{
    std::cout << time.getHours();
    std::cout << ":";
    std::cout << time.getMinutes();
    std::cout << ":";
    std::cout << time.getSeconds();
    std::cout << "\n";
}

void displayTime(const Time& time)  // Referenz == Alias des ORIGINALS
{
    // Aus Versehen:
    // time.setHours(0);

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

void resetTimeMitAdresse(Time* time)
{
    //time.setHours(0);
    //time.setMinutes(0);
    //time.setSeconds(0);

    // Korrekt
    (*time).setHours(0);
    (*time).setMinutes(0);
    (*time).setSeconds(0);

    // oder besser lesbar - abgekürzte Schreibweise für * und .
    time->setHours(0);
    time->setMinutes(0);
    time->setSeconds(0);
}

void resetTimeMitReferenz(Time& time)
{
    time.setHours(0);
    time.setMinutes(0);
    time.setSeconds(0);
}

void testDisplayAndResetTime()
{
    Time now;

    now.setHours(13);
    now.setMinutes(47);
    now.setSeconds(10);

    displayTime(now);

    resetTime(now);
    displayTime(now);

    resetTimeMitAdresse(&now);
    displayTime(now);

    resetTimeMitReferenz(now);
    displayTime(now);
}

void testDisplayTime()
{
    Time now;

    now.setHours(16);
    now.setMinutes(2);
    now.setSeconds(10);

    displayTime(now);
}

void test_zeiger()
{
    int n = 123;

    int* pi = NULL;   // Vereinbarung einer Adress-Variablen

    pi = &n;          // Adresse-von  // Adress-Operator '&'

    // Anweisung // Wertzuweisung
    // n den Wert 456 zuweisen, ohne den Bezeichner n zu verwenden
    *pi = 456;  // Wert - an (schreiben) // Wert von (lesen)
}

void test_reference()
{
    int n = 123;

    int& ri = n;   // Vereinbarung einer Referenz-Variablen // Deklaration

    // n den Wert 456 zuweisen, ohne den Bezeichner n zu verwenden
    ri = 456;
}


// ========================================

void tausche(int x, int y)  // Kopie
{
    int tmp = x;
    x = y;
    y = tmp;
}

void tauscheMitZeiger(int* x, int* y)   // Adresse / Pointer
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void tauscheMitReferenz(int& x, int& y)   // Referenz   // 2 Aliase für die aktuellen Parameter
{
    int tmp = x;
    x = y;
    y = tmp;
}

void test_tausche()
{
    int n = 5;
    int m = 6;

    std::cout << "Vorher:  " << n << ", " << m << "\n";
    tausche(n, m);
    //tausche(5, 6);
    std::cout << "Nachher: " << n << ", " << m << "\n";

    tauscheMitZeiger(&n, &m);
    //tauscheMitZeiger(5, 6);
    std::cout << "Nachher: " << n << ", " << m << "\n";

    tauscheMitReferenz(n, m);
    //tauscheMitReferenz(5, 6);
    std::cout << "Nochmal Nachher: " << n << ", " << m << "\n";
}