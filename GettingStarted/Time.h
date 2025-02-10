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
    // Konstruktoren
    Time();
    Time(int hours, int minutes, int seconds);
    Time(int hours, int minutes);


    // setter
    void setHours(int hours);
    void setMinutes(int minutes);
    void setSeconds(int seconds);

    // getter
    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;


    // public interface / methods / function
    void reset();
    // void increment();
    void print();
};
