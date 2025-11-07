#include "pch.h"
#include "system.h"
#include "Define.h"
#include "CPlace/CSquare.h"
#include "CObj/CBeginner.h"

CSqaure::CSqaure()
{
}

CSqaure::~CSqaure()
{
}

void CSqaure::Initialize()
{
}

int CSqaure::Update()
{
    int iInput(0);
    
    cls();

    m_pPlayer->ShowStatus();
    cout << "1. 집으로 / 2. 시장 / 3. 던전 입구 / 4. 메인메뉴 : ";
    cin >> iInput;

    switch (iInput)
    {
        case 1:
        {
            return HOME;
        }
        break;

        case 2:
        {
            return MARKET;
        }
        break;

        case 3:
        {
            return DUNGEON_ENTRANCE;
        }
        break;

        case 4:
        {
            return 0;
        }
        break;
    }
    return 0;
}

void CSqaure::Release()
{
}
