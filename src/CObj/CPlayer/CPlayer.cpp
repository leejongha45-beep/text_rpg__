#include "pch.h"
#include "system.h"
#include "CObj/CPlayer.h"

CPlayer::CPlayer()
: m_pInven(nullptr), m_pStatus(nullptr)
{
}

CPlayer::~CPlayer()
{
}

void CPlayer::Attack()
{
    
}

void CPlayer::ShowStatus()
{
    cout << "============================================" << endl;
    cout << "이름 : " << m_pStatus->ClassName << "\t레벨 : " << m_pStatus->iLevel << "\t골드 : " << m_pStatus->iGold << endl;
    cout << "체력 : " << m_pStatus->iHP << "\t마나 : " << m_pStatus->iMP << endl;
    cout << "공격력 : " << m_pStatus->iATP << "\t마력 : " << m_pStatus->iMTP << endl;
}

void CPlayer::Drink_HP_Potion()
{
}

void CPlayer::Drink_MP_Potion()
{
}

void CPlayer::Buy_Potion()
{
    // if (m_pStatus->iGold < )
}

void CPlayer::Sleep()
{
    cls();
    m_pStatus->iHP = MAX_HP(m_pStatus->iLevel);
    m_pStatus->iMP = MAX_MP(m_pStatus->iLevel);
    cout << "체력과 마나가 모두 회복됐다!" << endl;
}
