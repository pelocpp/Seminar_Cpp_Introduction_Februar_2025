// This.cpp

#include <iostream>

class EineKlasse
{
public:
    int einMember;  // Member Variable

    // EineKlasse* this_;

    // Konstruktor
    EineKlasse()
    {
        einMember = 0;
    }

    EineKlasse(int einMember)   // Parameter Variable 
    {
        this -> einMember = einMember;
    }
};

void test_this()
{
    EineKlasse obj(123);   // Standard-Konstruktor
}

