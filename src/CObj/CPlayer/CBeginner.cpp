#include "pch.h"
#include "system.h"
#include "CObj/CBeginner.h"

CBeginner::CBeginner()
{
    
}

CBeginner::~CBeginner()
{

}

void CBeginner::Initialize() // 신규 캐릭터 생성
{
    SAFE_DELETE(m_pStatus)
    m_pStatus = new PLAYERSTATUS;

    strcpy(m_pStatus->ClassName, "초보자");
    m_pStatus->iLevel = 1;
    m_pStatus->iHP = 100;
    m_pStatus->iMP = 10;
    m_pStatus->iEXP = 0;
    m_pStatus->iGold = 0;
    m_pStatus->iATP = 10;
    m_pStatus->iMTP = 0;
}

void CBeginner::Update()
{
}

void CBeginner::Release()
{
}

void CBeginner::Attack()
{
}

