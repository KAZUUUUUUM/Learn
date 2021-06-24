#include "hoge.h"
#include <iostream>
 
using namespace std;
 
Hoge::Hoge()
{
    cout << "コンストラクタ" << endl;
}

Hoge::~Hoge()
{
    cout << "デコンストラクタ" << endl;
}

void Hoge::foo()
{
    cout << "fooメソッド" << endl;
}