#pragma once
#include "Define.h"
#include "CItem/CItem.h"

class CPotion : public CItem
{
public:
    CPotion();
    ~CPotion();
public:
    void Initialize() = 0;
    void Update();
    void Release();
    POTION* Get_Potion() {return m_pPotion;}
    void Buy();
protected:
    POTION* m_pPotion;
};