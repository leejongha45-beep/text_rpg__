#include "pch.h"
#include "system.h"
#include "CMainGame.h"
#include "CObj/CObj.h"
#include "CObj/CBeginner.h"
#include "CPlace/CVillage.h"
#include "CItem/CInven.h"

CMainGame::CMainGame()
: m_pPlayer(nullptr), m_pVillage(nullptr), m_pInven(nullptr)
{
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
                Update();
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
    int iLocaion(1);

    while (true)
    {
        if (iLocaion == 1)
        {
            iLocaion = dynamic_cast<CVillage*>(m_pVillage)->MyHouse();
        }
    }
}

void CMainGame::Release()
{
}

void CMainGame::NewGame()
{
    m_pPlayer = new CBeginner;
    dynamic_cast<CBeginner*>(m_pPlayer)->Initialize();

    m_pInven = new CInven;
    dynamic_cast<CInven*>(m_pInven)->Initialize();

    m_pVillage = new CVillage;
    m_pVillage->Set_Player(m_pPlayer);
    m_pVillage->Set_Inven(m_pInven);
    dynamic_cast<CVillage*>(m_pVillage)->Initialize();

}