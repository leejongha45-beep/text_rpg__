#include "pch.h"
#include "system.h"
#include "Define.h"
#include "CPlace/CVillage.h"
#include "CObj/CBeginner.h"
#include "CItem/CInven.h"

CVillage::CVillage()
: m_pBox(nullptr)
{
}

CVillage::~CVillage()
{
}

void CVillage::Initialize()
{
    m_pBox = new BOX();
}

void CVillage::Update()
{
}

void CVillage::Release()
{
}

int CVillage::MyHouse()
{
    int iInput(0);

    while (true)
    {
        cls();
        m_pPlayer->ShowStatus();
        cout << "1. 잠자기 / 2. 상자 / 3. 저장하기 / 4. 집에서 나가기 / 5. 메인메뉴 : ";
        cin >> iInput;

        switch (iInput)
        {
            case 1:
            {
                dynamic_cast<CBeginner*>(m_pPlayer)->Sleep();
                pause();
                continue;
            }
            break;

            case 2:
            {
                Box();
                continue;
            }
            break;

            case 3:
            {
                cout << "미구현" << endl;
                continue;
            }
            break;
            
            case 4:
            {
                return ESQARE;
            }
            break;

            case 5:
            {
                return 0;
            }
            break;
        }
    }

    return 0;
}

int CVillage::SQARE()
{
    return 0;
}

void CVillage::Box()
{
    int iInput(0);
    int iChoice(0);

    while (true)
    {
        cls();
        ShowInBox();
        cout << "1. 꺼내기 / 2. 집어 넣기 / 3. 상자 닫기 : ";
        cin >> iInput;

        switch (iInput)
        {
            case 1:
            {
                cout << "1. 체력 포션 / 2. 마나 포션 : ";
                cin >> iChoice;
                if (iChoice == 1)
                {
                    if (dynamic_cast<CInven*>(m_pInven)->Get_Inven()->iHP_Potion <= 0)
                    {
                        cls();
                        cout << "포션이 없습니다" << endl;
                        pause();
                        continue;
                    }
                    else
                    {
                        cls();
                        ShowInBox();
                        dynamic_cast<CInven*>(m_pInven)->Get_Inven()->iHP_Potion++;
                        cout << "포션을 꺼냈습니다" << endl;
                        pause();
                        continue;
                    }                    
                }
                else if (iChoice == 2)
                {
                    if (dynamic_cast<CInven*>(m_pInven)->Get_Inven()->iMP_Potion <= 0)
                    {
                        cls();
                        cout << "포션이 없습니다" << endl;
                        pause();
                        continue;
                    }
                    else
                    {
                        cls();
                        ShowInBox();
                        dynamic_cast<CInven*>(m_pInven)->Get_Inven()->iMP_Potion++;
                        cout << "포션을 꺼냈습니다" << endl;
                        pause();
                        continue;
                    }
                }
            }
            break;

            case 2:
            break;

            case 3:
                return;
            break;
        }
    }
}

void CVillage::ShowInBox()
{
    m_pPlayer->ShowStatus();
    cout << "============================================" << endl;
    cout << "내 인벤토리" << endl;
    cout << "체력 포션 : " << dynamic_cast<CInven*>(m_pInven)->Get_Inven()->iHP_Potion << "\t마나 포션 : " << dynamic_cast<CInven*>(m_pInven)->Get_Inven()->iMP_Potion << endl;
    cout << "============================================" << endl;
    cout << "상자" << endl;
    cout << "체력 포션 : " << m_pBox->iHP_Potion << "\t마나 포션 : " << m_pBox->iMP_Potion << endl;        
}
