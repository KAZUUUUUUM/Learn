#include<iostream>
#include<string> //stringで必要

using namespace std;

int main()
{
    string str1,str2,str3;
    cout << "姓を入力:";
    cin >> str1;
    cout << "名を入力:";
    cin >> str2;
    str3= str1+str2;
    cout << str3 << endl;

    return 0;
}

// #include <iostream>
// #include <string>
 
// using namespace std;
 
// int main(){
//     string s,t;
//     t ="入力された文字は、";
//     cout << "文字列を入力：";
//     cin >> s;
//     cout << t+s << "です。" << endl;
//     return 0;
// }