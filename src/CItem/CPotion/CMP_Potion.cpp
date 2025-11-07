#include "pch.h"
#include "system.h"
#include "Define.h"
#include "CItem/CMP_Potion.h"
#include "CObj/CPlayer.h"

CMP_Potion::CMP_Potion()
{
}

CMP_Potion::~CMP_Potion()
{
}

void CMP_Potion::Initialize()
{
    m_pPotion = new POTION;

    m_pPotion->iCount = 0;
    m_pPotion->iGold = 30;
    m_pPotion->iHeal = 30;
}

void CMP_Potion::Update()
{
}

void CMP_Potion::Release()
{
}

void CMP_Potion::Drink()
{
    if (m_pPotion->iCount > 0)
    {
        m_pPlayer->Get_Status()->iMP += m_pPotion->iHeal;
        m_pPotion->iCount--;
        cout << "포션을 마셨습니다." << endl;
    }

    else
    {
        cout << "포션이 부족합니다" << endl;
    }
}
