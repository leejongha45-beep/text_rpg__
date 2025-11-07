#include "pch.h"
#include "system.h"
#include "Define.h"
#include "CItem/CHP_Potion.h"
#include "CObj/CPlayer.h"

CHP_Potion::CHP_Potion()
{
}

CHP_Potion::~CHP_Potion()
{
}

void CHP_Potion::Initialize()
{
    m_pPotion = new POTION;

    m_pPotion->iCount = 0;
    m_pPotion->iGold = 30;
    m_pPotion->iHeal = 50;
}

void CHP_Potion::Update()
{
}

void CHP_Potion::Release()
{
}

void CHP_Potion::Drink()
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
