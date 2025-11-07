#include "pch.h"
#include "system.h"
#include "CMainGame.h"
#include "CObj/CObj.h"
#include "CObj/CBeginner.h"
#include "CPlace/CHome.h"
#include "CPlace/CMarket.h"
#include "CPlace/CSquare.h"
#include "CItem/CHP_Potion.h"
#include "CItem/CMP_Potion.h"

CMainGame::CMainGame()
{
    m_pPlayer = nullptr;
    m_pHome = nullptr;
    m_pMarket = nullptr;
    m_pSquare = nullptr;
    m_pHP_Potion = nullptr;
    m_pMP_Potion = nullptr;
}

CMainGame::~CMainGame()
{
}

void CMainGame::Initialize()
{
    int iInput(0);

    while (true)
    {
        cls();
        cout << "1. NEW GAME " << endl << "2. LOAD GAME" << endl << "3. QUIT GAME" << endl;
        cin >> iInput;

        switch (iInput)
        {
            case 1:
            {
                NewGame();
            }
            break;

            case 2:
            {

            }
            break;

            case 3:
            {

            }
            break;

            default:
            {
                cls();
                cout << "다시 입력 하세요" << endl;
                pause();
                continue;
            }
            break;
        }
    }
}

void CMainGame::Update()
{
}

void CMainGame::Release()
{
}

void CMainGame::NewGame()
{
    m_pHome = new CHome;
    m_pMarket = new CMarket;
    m_pSquare = new CSqaure;

    m_pPlayer = new CBeginner;
    m_pPlayer->Initialize();

    m_pHP_Potion = new CHP_Potion;
    m_pMP_Potion = new CMP_Potion;
    m_pHP_Potion->Initialize();
    m_pMP_Potion->Initialize();

    m_pHome->Set_Player(m_pPlayer);
    m_pHome->Set_HP_Potion(m_pHP_Potion);
    m_pHome->Set_MP_Potion(m_pMP_Potion);

    m_pMarket->Set_Player(m_pPlayer);
    m_pMarket->Set_HP_Potion(m_pHP_Potion);
    m_pMarket->Set_MP_Potion(m_pMP_Potion);

    m_pSquare->Set_Player(m_pPlayer);
    m_pSquare->Set_HP_Potion(m_pHP_Potion);
    m_pSquare->Set_MP_Potion(m_pMP_Potion);

    m_pHP_Potion->Set_Player(m_pPlayer);
    m_pMP_Potion->Set_Player(m_pPlayer);

    int iLocation(1);

    while (true)
    {
        if (iLocation == HOME)
        {
            iLocation = m_pHome->Update();
        }
    
        else if (iLocation == SQARE)
        {
            iLocation = m_pSquare->Update();
        }
    
        else if (iLocation == MARKET)
        {
            iLocation = m_pMarket->Update();
        }
    }

}