// Bibliothek_STL.cpp

#include <iostream>
//#include <random>
//#include <time.h>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

std::unordered_map<std::string, int> g_phonebook;


void test_array()
{
    int numbers[10];  // FIXED SIZE !!!!!!!!!!!!!!!!!
}

void test_stl_01()
{
    std::vector<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    for (int i = 0; i < numbers.size(); i++) {

        int value = numbers[i];
        std::cout << i << ": " << value << '\n';
    }
}

void test_stl_02()
{
    std::vector<int> numbers;
    numbers.reserve(80);

    for (int i = 0; i < 100; i++) {

        numbers.push_back(2 * i);
        std::cout << i << ": " << numbers.size() << ", Capacity:" << numbers.capacity() <<  '\n';
    }

    // fertig

    numbers.shrink_to_fit();
    std::cout << "Size: " << numbers.size() << ", Capacity:" << numbers.capacity() << '\n';
}

void test_stl_03()
{
    std::vector<int> numbers;
    numbers.reserve(3);

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    // Diese for-loop geht nicht bei jedem Container
    for (int i = 0; i < numbers.size(); i++) {

        int value = numbers[i];   // Index-Operator: geht nicht bei jedem Container
        std::cout << i << ": " << value << '\n';
    }
}

void test_stl_04()
{
    std::vector<int> numbers;
    numbers.reserve(3);

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    std::vector<int>::iterator pos = numbers.begin();
    if (pos == numbers.end()) {

        std::cout << "Ende des Containers\n";
        return;
    }


    // Wie komme ich von der Position zum Wert an dieser Position: Mit dem * Operator
    int value = *pos;
    std::cout << value << '\n';

    // Wie komme ich von der Position pos zur nächstem Position im Container? Mit dem ++ Operator
    pos++;
    if (pos == numbers.end()) {

        std::cout << "Ende des Containers\n";
        return;
    }

    value = *pos;
    std::cout << value << '\n';

    pos++;
    if (pos == numbers.end()) {

        std::cout << "Ende des Containers\n";
        return;
    }

    value = *pos;
    std::cout << value << '\n';

    pos++;
    if (pos == numbers.end()) {

        std::cout << "Ende des Containers\n";
        return;
    }

    value = *pos;
    std::cout << value << '\n';
}

void test_stl_05()
{
    std::vector<int> numbers;
    numbers.reserve(3);

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    std::vector<int>::iterator pos = numbers.begin();

    // den Container durchlaufen
    while (pos != numbers.end()) {

        int value = *pos;
        std::cout << value << '\n';
        ++pos;
    }

    std::cout << "Ende des Containers\n";
}


static void printElement(int value) {
    std::cout << value << '\n';
}

static void test_stl_06()
{
    std::vector<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    std::for_each(
        numbers.begin(),
        numbers.end(),
        printElement
    );

    std::cout << "Ende des Containers\n";
}

void test_stl_07()
{
    int start;

    std::cout << "Startwert: ";
    std::cin >> start;

    std::cout << "Startwert: " << start << '\n';

    if (start % 2 == 0) {
        std::cout << "Gerade";
    }
    else {
        std::cout << "Ungerade";
    }
}


void test_stl()
{
    test_stl_07();
}