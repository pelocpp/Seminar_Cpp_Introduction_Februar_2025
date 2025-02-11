// Time.cpp

#include "Time.h"

#include <iostream>

Time::Time() : Time (0, 0, 0) {}

//Time::Time()
//{
//    m_hours = 0;
//    m_minutes = 0;
//    m_seconds = 0;
//}

Time::Time(int hours, int minutes, int seconds)
{
    m_hours = hours;
    m_minutes = minutes;
    m_seconds = seconds;
}

Time::Time(int hours, int minutes)
    : Time (hours, minutes, 0)
{}

void Time::reset()
{
    m_hours = 0;
    m_minutes = 0;
    m_seconds = 0;
}

void Time::print() const
{
    std::cout << m_hours << ":" << m_minutes << ":" << m_seconds << '\n';
}

void Time::setHours(int hours)  
{
    if (hours >= 0 && hours < 24)  // korrekt
    {
        m_hours = hours;
    }
    else
    {
        m_hours = 0;
    }
}

int Time::getHours() const
{
    return m_hours;
}

int Time::getMinutes() const
{
    return m_minutes;
}

int Time::getSeconds() const
{
    return m_seconds;
}


void Time::setMinutes(int minutes)
{
    if (minutes >= 0 && minutes < 60)  // korrekt
    {
        m_minutes = minutes;
    }
    else
    {
        m_minutes = 0;
    }
}

void Time::setSeconds(int seconds)
{
    if (seconds >= 0 && seconds < 60)  // korrekt
    {
        m_seconds = seconds;
    }
    else
    {
        m_seconds = 0;
    }
}

// ============================
// Vergleich

bool Time::equals(const Time& other) const
{
     //other.m_hours = other.m_hours + 1;
     //this->m_hours = this->m_hours + 1;

    if (this->m_hours != other.m_hours) {
        return false;
    }

    if (this->m_minutes != other.m_minutes) {
        return false;
    }

    if (this->m_seconds != other.m_seconds) {
        return false;
    }

    print();  // benachbarte Methode DESSELBEN Objekts
        
    return true;
}

bool Time::operator == (const Time& other) const
{
    if (this->m_hours != other.m_hours) {
        return false;
    }

    if (this->m_minutes != other.m_minutes) {
        return false;
    }

    if (this->m_seconds != other.m_seconds) {
        return false;
    }

    return true;
}