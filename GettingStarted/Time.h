// Time.h

#pragma once

class Time
{
private:
    // member data / instance variables / object variables
    int m_hours;
    int m_minutes;
    int m_seconds;

public:
    // Konstruktor
    Time();

    // setter
    void setHours(int hours);
    void setMinutes(int minutes);
    void setSeconds(int seconds);

    // getter
    int getHours();


    // public interface / methods / function
    void reset();
    // void increment();
    void print();
};
