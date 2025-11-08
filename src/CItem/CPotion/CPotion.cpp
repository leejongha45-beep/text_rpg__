#include "pch.h"
#include "system.h"
#include "CItem/CPotion.h"
#include "CObj/CPlayer.h"

CPotion::CPotion()
: m_pPotion(nullptr)
{
}

CPotion::~CPotion()
{
}

void CPotion::Initialize()
{
    m_pPotion = new POTION[2]();
    
    m_pPotion[HP].iHeal = 50;
    m_pPotion[HP].iGold = 50;

    m_pPotion[MP].iHeal = 30;
    m_pPotion[MP].iGold =50;
}

void CPotion::Update()
{
}

void CPotion::Release()
{
}
