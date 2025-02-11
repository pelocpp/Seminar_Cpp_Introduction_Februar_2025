// Zeichen_und_Zeichenketten.cpp

#include <iostream>
#include <string>

void test_zeichenkette()  // Als Objekt
{
    std::string s("ABCDEF");

    // Aufruf einer Methode size
    size_t length = s.size();

    //std::cout << "size_t: " << sizeof(size_t) << '\n';
    //std::cout << "int:    " << sizeof(int) << '\n';
    //std::cout << "long:        " << sizeof(long) << '\n';
    //std::cout << "long long:   " << sizeof(long long) << '\n';

    std::cout << "String: " << s << '\n';
    std::cout << "Length: " << length << '\n';

    char ch = s.at(1);
    std::cout << "ch:     " << ch << '\n';

    // Leicht skuril: Wollen 'B' durch ein kleines 'b' ersetzen
    s.at(1) = 'b';
    std::cout << "String: " << s << '\n';

    // Intuitiver lesbar: Überladen von Operatoren
    ch = s[2];
    std::cout << "ch:     " << ch << '\n';

    //Gut lesbar: Wollen 'C' durch ein kleines 'c' ersetzen
    s[2] = 'c';
    std::cout << "String: " << s << '\n';

    std::string sub;  // Standard-Konstruktor

    sub = s.substr(1, 2);
    std::cout << "Sub:    " << sub << '\n';

    s.insert(3, "12345");
    std::cout << "s:      " << s << '\n';

    s.append("!");
    std::cout << "s:      " << s << '\n';

    bool isSame = (s == sub);
    std::cout << "s == sub:   " << std::boolalpha << isSame << '\n';

    isSame = (s == s);
    std::cout << "s == s:     " << std::boolalpha << isSame << '\n';

    std::string number("12345");
    std::cout << "number: " << number << '\n';

    // Konvertierung von Zeichenkette nach int: stoi = string to int
    int value = std::stoi(number);
    std::cout << "value:  " << value << '\n';

    // Abfragefunktionen: Ist ein Zeichen eine Ziffer (0, 1, 2, 3, ..., 9)
    std::cout << "s:      " << s << '\n';
    bool b = std::isdigit(s[3]);
    std::cout << "b:     " << std::boolalpha << b << '\n';

    b = std::isdigit(s[2]);
    std::cout << "b:     " << std::boolalpha << b << '\n';

    // Zwei Zeichenketten aneinander hängen
    std::string s1("12345");
    std::string s2("67890");
    std::string result;

    result = s1 + s2;
    std::cout << "result:      " << result << '\n';
}


void test_zeichenkette_als_Konstante()
{
    const char* ch = "ABCDEF";
}

void test_zeichen()
{
    for (int i = 0; i < 128; ++i) {

        char ch = i;

        std::cout << i << ": " << ch << '\n';
    }
}

void test_zeichen_01()
{
    char ch = '?';

    std::cout << ch << '\n';

    int n = ch;

    std::cout << n << '\n';

    ch = 70;   // ASCII-Wert

    std::cout << ch << '\n';
}

