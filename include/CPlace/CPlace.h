#pragma once

class CObj;
class CItem;

class CPlace
{
public:
    CPlace();
    ~CPlace();
public:
    virtual void Initialize() = 0;
    virtual int Update() = 0;
    virtual void Release() = 0;
public:
    void Set_Player(CObj* pPlayer) {m_pPlayer = pPlayer;}
    void Set_HP_Potion(CItem* pItem) {m_pHP_Potion = pItem;}
    void Set_MP_Potion(CItem* pItem) {m_pMP_Potion = pItem;}
protected:
    CObj* m_pPlayer;
    CItem* m_pHP_Potion;
    CItem* m_pMP_Potion;
};