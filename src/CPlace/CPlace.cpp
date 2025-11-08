#include "pch.h"
#include "system.h"
#include "CPlace/CPlace.h"

CPlace::CPlace()
: m_pVillage(nullptr), m_pDungeon(nullptr), m_pPlayer(nullptr), m_pInven(nullptr), m_pPotion(nullptr)
{
}

CPlace::~CPlace()
{
}
void CPlace::Initialize()
{
}

void CPlace::Update()
{
}

void CPlace::Release()
{
}

void CPlace::ShowNowLocation(const char* pLocation)
{
    cout << "============================================" << endl;
    cout << "현재 장소 : " << pLocation << endl;
}
