#ifndef _FIGHTER_H_
#define _FIGHTER_H_
#include "airplane.h"

class Fighter:public Airplane{
    public:
    //戦闘するクラス
    void fight();
};

#endif //_FIGHTER_H_