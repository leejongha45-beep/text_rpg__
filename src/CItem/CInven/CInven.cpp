#include "pch.h"
#include "system.h"
#include "CItem/CInven.h"

CInven::CInven()
{
    m_pInven = nullptr;
}

CInven::~CInven()
{
}

void CInven::Initialize()
{
    m_pInven = new INVENTORY();
}

void CInven::Update()
{
}

void CInven::Release()
{
}
