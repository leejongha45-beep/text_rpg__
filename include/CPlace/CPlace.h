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
protected:
    void ShowNowLocation(const char* pLocation);
public:
    virtual void Set_Player(CObj* pPlayer) = 0;
    virtual void Set_Inven(CItem* pInven) = 0;
    virtual void Set_Potion(CItem* pPotion) = 0;
protected:
    CPlace* m_pVillage;
    CPlace* m_pDungeon;
    CObj* m_pPlayer;
    CItem* m_pInven;
    CItem* m_pPotion;
};