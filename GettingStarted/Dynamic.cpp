// Dynamic.cpp

#include <iostream>
#include <random>
#include <time.h>

static void test_stack()
{
    int n = 123;

    // ... arbeiten
    n = 2 * n;
    std::cout << n << '\n';
}

// Okay !!! Aber niemals sollte eine Arbeitsfunktion Speicher freigebem
static void workWithData(int* pi)
{
    *pi = 456;   // Wert-von // Indirektion

    // gebe Speicher frei
    // delete pi;
}

static void test_heap()
{
    // Zeigervariable, new

    // 1. Beispiel: eine int-Variable
    int* ptr = new int(123);
    std::cout << *ptr << '\n';

    // Wert ändern
    workWithData(ptr);

    std::cout << *ptr << '\n';

    // Speicher freigeben
    delete ptr;
}

// ===========================================================
// Alternative:

int* g_ptr = NULL;

static  void workWithData2(int* pi)
{
    if (pi != NULL) {
        *pi = 456;   // Wert-von // Indirektion
    }
    else {
        std::cout << "no mem available" << '\n';
    }
}

static void test_heap2()
{
    // Zeigervariable, new

    g_ptr = new int(123);
    std::cout << *g_ptr << '\n';

    // Wert ändern
    workWithData2(g_ptr);

    std::cout << *g_ptr << '\n';

    // Speicher freigeben
    delete g_ptr;
    g_ptr = NULL;

    workWithData2(g_ptr);
}

// ======================================================================
// Anwendung

// lucky lottery ticket  
// Excuse me : Das machen wir jetzt auf die Schnelle in EINER Datei // bad code :)
class LotteryTicket
{
private:
    // int m_tickets[100];  // 5 Tickets ???

    int  m_count;
    int* m_tickets;

public:
    // Konstruktor
    LotteryTicket(int count) {
        m_count = count;
        m_tickets = NULL;

        srand((unsigned int) time(0));   // Zufallszahlengenerator vorbelegen
    }

    // Destruktor
    ~LotteryTicket() {
        std::cout << "~LotteryTicket";

        delete[] m_tickets;  // so genanntes array-delete
    }

    void buyTickets()
    {
                                        // array-new mit []
        m_tickets = new int[m_count];   // habe 5 Tickets // Speicher auf EINMAL gekauft

        for (int i = 0; i < m_count; i++) {

            m_tickets[i] = 1 + rand() % 49 ;
        }
    }

    void printTickets()
    {
        for (int i = 0; i < m_count; i++) {
            std::cout << "Ticket " << (i + 1) << ": " << m_tickets[i] << '\n';
            // std::cout << "Ticket " << (i + 1) << ": " << (m_tickets + i) << '\n';
        }
    }
};

static void test_lottery()
{
    int wievieleTickets;

    std::cout << "Wieviele Lose wollen Sie kaufen? ";

    std::cin >> wievieleTickets;

    LotteryTicket lottery(wievieleTickets);
    lottery.buyTickets();
    lottery.printTickets();
    // wo kommt das delete hin ... in den Destruktor .. wird AUTOMATISCH aufgerufen !!!
}


static void test_static()
{
    static int n = 123;   // lokale Variable oder : globale Variable (die nur innerhalb der Funktion verfügbar ist)

    n++;

    std::cout << n << '\n';
}


void test_dynamic()
{
    //test_stack();
    //test_heap();

    // test_lottery();

    test_static();
    test_static();
    test_static();
}