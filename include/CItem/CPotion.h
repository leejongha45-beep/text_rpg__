#pragma once
#include "Define.h"
#include "CItem/CItem.h"

class CPotion : public CItem
{
public:
    CPotion();
    ~CPotion();
public:
    void Initialize();
    void Update();
    void Release();
public:
    POTION* Get_Potion() {return m_pPotion;}
private:
    POTION* m_pPotion;
};