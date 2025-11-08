#pragma once
#include "CObj.h"
#include "Define.h"

class CItem;

class CPlayer : public CObj
{
public:
    CPlayer();
    ~CPlayer();
public:
    void Initialize();
    void Update();
    void Release();
public:
    void Attack() override;
    void ShowStatus() override;
    void Drink_HP_Potion();
    void Drink_MP_Potion();
    void Buy_Potion();
    void Sleep();
    PLAYERSTATUS* Get_Status() override {return m_pStatus;}
protected:
    PLAYERSTATUS* m_pStatus;
    CItem* m_pInven;
    CItem* m_pPotion;
};