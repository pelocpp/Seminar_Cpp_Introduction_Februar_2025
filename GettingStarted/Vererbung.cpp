#include <iostream>
#include <string>

class Rectangle
{
private:
    int m_x;
    int m_y;
    int m_width;
    int m_height;

public:
    // c'tor(s)
    Rectangle() : Rectangle(0, 0, 0, 0) {}

    // member initializer list
    Rectangle(int x, int y, int width, int height) 
        : m_x(x), m_y(y), m_width(width), m_height(height)
    {}

    // getter
    int getX() const { return m_x; }
    int getY() const { return m_y; }
    int getWidth() const { return m_width; }
    int getHeight() const { return m_height; }

    // public interface
    void eraseBackground()
    {
        std::cout << "  Rectangle::eraseBackground" << std::endl;
    }

    virtual void draw() {

        std::cout
            << "Rectangle::draw [x=" << m_x
            << ", y=" << m_y << "]" << std::endl;
    }
};

// ===================================================================

// Abgeleitete Klasse
class ColoredRectangle : public Rectangle
{
private:
    int m_color;

public:
    // c'tor(s)
    ColoredRectangle() : ColoredRectangle(0, 0, 0, 0, 999) {}

    // member initializer list
    ColoredRectangle(int x, int y, int width, int height, int color)
        : Rectangle(x, y, width, height), m_color(color)
    {
    }

    // getter
    int getColor() const { return m_color; }

public:
    void draw()
    {
        Rectangle::draw();

        // Ergänzung // Zusätzliche Funktionalität // Erweiterung
        std::cout << "ColoredRectangle: Colored [m_color=" << m_color << "]" << std::endl;
    }
};


void test_vererbung()
{
    Rectangle* rp;

    ColoredRectangle* cr = new ColoredRectangle(1, 1, 20, 30, 999);

    rp = cr;      // Rectangle* = ColoredRectangle* // ist-ein

    rp->draw();   // Welches draw wird aufgerufen ???
                  // a) Rectangle::draw - weil rp ist vom Typ Rectangle*
                  // b) ColoredRectangle::draw - weil der Zeiger auf ein ColoredRectangle Objkekt zeigt

    delete cr;
}





void test_vererbung_die_erste()
{
    ColoredRectangle cr;

    int x = cr.getX();

    cr.draw();
}