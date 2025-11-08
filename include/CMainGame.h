#pragma once

class CObj;
class CPlace;
class CItem;

class CMainGame
{
public:
    CMainGame();
    ~CMainGame();
public:
    void Initialize();
    void Update();
    void Release();
public:
    void NewGame();
private:
    CObj* m_pPlayer;
    CPlace* m_pVillage;
    CItem* m_pInven;
    CItem* m_pPotion;
};
