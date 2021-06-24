#ifndef _NEWCALC_H_
#define _NEWCALC_H_
#include "fundcalc.h"

class NewCalc:public FundCalc{
    public:
    //コンストラクタ
    NewCalc();
    //積
    double mul();
    //商
    double div();
};

#endif //_NEWCLAC_H_
