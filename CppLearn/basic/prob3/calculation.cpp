#include "calculation.h"

void Calculation::setNumber1(int num)
{
    m_number1 = num;
}

void Calculation::setNumber2(int num)
{
    m_number2 = num;
}

int Calculation::getNumber1()
{
    return m_number1;
}

int Calculation::getNumber2()
{
    return m_number2;
}

int Calculation::add()
{
    int sum = m_number1 + m_number2;
    return sum;
}

int Calculation::sub()
{
    int sub = m_number1 - m_number2;
    return sub;
}

