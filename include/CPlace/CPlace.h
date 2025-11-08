#pragma once

class CObj;
class CItem;

class CPlace
{
public:
    CPlace();
    virtual ~CPlace();
public:
    void Initialize();
    void Update();
    void Release();
public:
    virtual void Set_Player(CObj* pPlayer) = 0;
    virtual void Set_Inven(CItem* pInven) = 0;
protected:
    CPlace* m_pVillage;
    CPlace* m_pDungeon;
    CObj* m_pPlayer;
    CItem* m_pInven;
};