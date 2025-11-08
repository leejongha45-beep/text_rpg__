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
public:
    int MyHouse();
    int SQARE();
    void Box();
    void ShowInBox();
private:
    BOX* m_pBox;
};