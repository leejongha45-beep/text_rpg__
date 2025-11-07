#include "pch.h"
#include "system.h"
#include "CObj/CPlayer.h"

CPlayer::CPlayer()
{
    m_pStatus = nullptr;
}

CPlayer::~CPlayer()
{
}

void CPlayer::Initialize()
{
}

void CPlayer::Update()
{
}

void CPlayer::Release()
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
