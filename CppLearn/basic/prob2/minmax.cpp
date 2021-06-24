#include "minmax.h"
 
//SET
void MinMax::set(int a,int b,int c){
    n1=a;n2=b;n3=c;
}

//  最大値を返す
int MinMax::max(int n1,int n2,int n3){
    int max=n1;
    if(max < n2) max = n2;
    if(max < n3) max = n3;
    return max;
}
//  最小値を返す
int MinMax::min(int n1,int n2,int n3){
    int min=n1;
    if(min > n2) min = n2;
    if(min > n3) min = n3;
    return min;
}