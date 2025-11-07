#include "pch.h"
#include "system.h"
#include "Define.h"
#include "CPlace/CHome.h"
#include "CObj/CBeginner.h"
#include "CItem/CHP_Potion.h"
#include "CItem/CMP_Potion.h"

CHome::CHome()
{
}

CHome::~CHome()
{
}

void CHome::Initialize()
{
}

int CHome::Update()
{
    int iInput(0);

    while (true)
    {
        cls();
        m_pPlayer->ShowStatus();
    
        cout << "1. 집에서 나가기 / 2. 잠자기 / 3. 상자 / 4. 저장하기 / 5. 메인메뉴 : ";
        cin >> iInput;
    
        switch (iInput)
        {
            case 1:
            {
                return SQARE;
            }
            break;
    
            case 2:
            {
                Sleep();
                pause();
                continue;
            }
            break;
    
            case 3:
            {
                InBox();
                continue;
            }
            break;
    
            case 4:
            {
                cout << "미구현" << endl;
                pause();
                continue;
            }
            break;
    
            case 5:
            {
                return 0;
            }
            break;
        }    
    }
    return 0;
}

void CHome::Release()
{
}

void CHome::Sleep()
{
    cls();
    m_pPlayer->Get_Status()->iHP = MAX_HP(m_pPlayer->Get_Status()->iLevel);
    m_pPlayer->Get_Status()->iMP = MAX_MP(m_pPlayer->Get_Status()->iLevel);
    cout << "체력과 마나 모두 회복되었다!" << endl;
}

void CHome::InBox()
{
    int iInput(0);

    while (true)
    {
        cout << "============================================" << endl;
        cout << "1. 포션 2. 무기 3. 방어구 4. 취소 : ";
        cin >> iInput;

        switch (iInput)
        {
            case 1:
            {
                cls();
                cout << "1. HP 물약 : " << m_pHP_Potion->Get_Potion()->iCount << "\t2. MP 물약 : " << m_pMP_Potion->Get_Potion()->iCount;
            }
            break;

            case 2:
            {
                cout << "미구현" << endl;
                pause();
                continue;
            }
            break;
            
            case 3:
            {
                cout << "미구현" << endl;
                pause();
                continue;
            }
            break;

            case 4:
            {
                return;
            }
            break;
        }
    }
}
