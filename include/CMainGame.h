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
    CPlace* m_pHome;
    CPlace* m_pMarket;
    CPlace* m_pSquare;
    CItem* m_pHP_Potion;
    CItem* m_pMP_Potion;
};
