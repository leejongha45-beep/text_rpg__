#pragma once
#include "Define.h"

class CObj;

class CItem
{
public:
    CItem();
    virtual ~CItem();
public:
    virtual void Initialize() = 0;
    void Update();
    void Release();
    virtual POTION* Get_Potion() {return nullptr;}
    void Set_Player(CObj* pPlayer) {m_pPlayer = pPlayer;}
protected:
    CObj* m_pPlayer;
    ITEMTABLE* m_pItem;
};