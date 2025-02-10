// Time.cpp

#include "Time.h"

#include <iostream>

Time::Time()
{
    m_hours = 0;
    m_minutes = 0;
    m_seconds = 0;
}

void Time::reset()
{
    m_hours = 0;
    m_minutes = 0;
    m_seconds = 0;
}

void Time::print()
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

int Time::getHours()
{
    return m_hours;
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
