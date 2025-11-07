#include "pch.h"
#include "system.h"
#include "CItem/CPotion.h"
#include "CObj/CPlayer.h"

CPotion::CPotion()
{
    m_pPotion = nullptr;
}

CPotion::~CPotion()
{
}

void CPotion::Initialize()
{
}

void CPotion::Update()
{
}

void CPotion::Release()
{
}

void CPotion::Buy()
{
    if (m_pPlayer->Get_Status()->iGold > m_pPotion->iGold)
    {
        m_pPlayer->Get_Status()->iGold -= m_pPotion->iGold;
        m_pPotion->iCount++;
        cout << "포션 구입완료" << endl;
        pause();
    }
    
    else
    {
        cout << "골드가 부족합니다" << endl;
    }
}
