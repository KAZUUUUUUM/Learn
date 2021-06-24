#ifndef _NUMBER_H_
#define _NUMBER_H_
#include<iostream>
using namespace std;
class Number{
private:
    //  メンバ変数
    int a;
    int b;
public:
    //コンストラクタ
    Number();
    //デコンストラクタ
    ~Number();
    //  二つの数値を設定
    void setNumbers(int n1, int n2);
    //  二つの数の和を取得
    int getAdd();
};

#endif // _NUMBER_H_