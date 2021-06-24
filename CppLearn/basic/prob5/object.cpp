#include "object.h"
 
//  静的メンバ変数の初期値を設定
int Object::m_objectNum = 0;
 
//  コンストラクタ
Object::Object()
{
    //  オブジェクトの数をカウントする
    m_objectNum++;
}
//  デストラクタ
Object::~Object()
{
    //  オブジェクトの数をカウントする
    m_objectNum--;
}

//オブジェクトの数を取得
Object::getObjectNum()
{
    return m_objectNum;
}