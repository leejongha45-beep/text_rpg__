#pragma once
#include "CPlace.h"

class CVillage : public CPlace
{
public:
    CVillage();
    ~CVillage();
public:
    void Initialize();
    void Update();
    void Release();
public:
    void Set_Player(CObj* pPlayer) {m_pPlayer = pPlayer;}
    void Set_Inven(CItem* pInven) {m_pInven = pInven;}
    void Set_Potion(CItem* pPotion) {m_pPotion = pPotion;}
public:
    int MyHouse();
    int SQARE();
    int Market();
    void Box();
    void ShowInBox();
private:
    BOX* m_pBox;
};