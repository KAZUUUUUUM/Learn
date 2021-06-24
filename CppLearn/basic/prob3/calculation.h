#ifndef _CALCULATION_H_
#define _CALCULATION_H_

#include<iostream>

class Calculation{
private:
    int m_number1,m_number2;
public:
    //数字1をセット
    void setNumber1(int num);
    //数字2をセット
    void setNumber2(int num);
    //数字1を返す
    int getNumber1();
    //数字2を返す
    int getNumber2();
    //add関数
    int add();
    //sub関数
    int sub();
};

#endif //_CALCULATION_H_