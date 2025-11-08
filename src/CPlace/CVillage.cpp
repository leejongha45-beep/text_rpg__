#include "pch.h"
#include "system.h"
#include "Define.h"
#include "CPlace/CVillage.h"
#include "CObj/CBeginner.h"
#include "CItem/CInven.h"
#include "CItem/CPotion.h"

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
        ShowNowLocation("집");
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
    int iInput(0);

    while (true)
    {
        cls();
        ShowNowLocation("광장");
        m_pPlayer->ShowStatus();
        cout << "1. 집으로 / 2. 시장 / 3. 던전 입구 / 4. 메인메뉴 : ";
        cin >> iInput;

        switch (iInput)
        {
            case 1:
            {
                return MY_HOUSE;
            }
            break;

            case 2:
            {
                return EMARKET;
            }
            break;

            case 3:
            {
                return EDUNGEON;
            }
            break;

            case 4:
            {
                return 0;
            }
            break;
        }
    }
    return 0;
}

int CVillage::Market()
{
    int iInput(0);
    int iChoice(0);

    while (true)
    {
        cls();
        ShowNowLocation("시장");
        m_pPlayer->ShowStatus();

        cout << "1. 물약 상점 / 2. 장비 상점 / 3. 광장으로 / 4. 메인메뉴 : ";
        cin >> iInput;

        switch (iInput)
        {
            // 믈약 상점
            case 1:
            {
                while (true)
                {
                    cls();
                    ShowNowLocation("물약 상점");
                    m_pPlayer->ShowStatus();
                    cout << "1. 채력 물약 / 2. 마나 물약 3. 시장으로 : ";
                    cin >> iChoice;
    
                    if (iChoice == 1)
                    {
                        if (dynamic_cast<CPotion*>(&m_pPotion[HP])->Get_Potion()->iGold > m_pPlayer->Get_Status()->iGold)
                        {
                            cout << "골드가 부족합니다" << endl;
                            pause();
                            continue;
                        }
    
                        else
                        {
                            m_pPlayer->Get_Status()->iGold -= dynamic_cast<CPotion*>(&m_pPotion[HP])->Get_Potion()->iGold;
    
                            dynamic_cast<CInven*>(m_pInven)->Get_Inven()->iHP_Potion++;

                            cout << "물약 구입 완료" << endl;
                            pause();
                            continue;
                        }
                    }
                    
                    else if (iChoice == 2)
                    {
                        if (dynamic_cast<CPotion*>(&m_pPotion[MP])->Get_Potion()->iGold > m_pPlayer->Get_Status()->iGold)
                        {
                            cout << "골드가 부족합니다" << endl;
                            pause();
                        }
        
                        else
                        {
                            m_pPlayer->Get_Status()->iGold -= dynamic_cast<CPotion*>(&m_pPotion[MP])->Get_Potion()->iGold;
        
                            dynamic_cast<CInven*>(m_pInven)->Get_Inven()->iMP_Potion++;

                            cout << "물약 구입 완료" << endl;
                            pause();
                        }
                    }

                    else if (iChoice == 3)
                    {
                        break;
                    }
                }
            }
            break;
            // 장비 상점
            case 2:
            {
                cout << "미구현" << endl;
                pause();
            }
            break;
            // 시장 탈출
            case 3:
            {
                return ESQARE;
            }
            break;
            // 게임 종료
            case 4:
            {
                return 0;
            }
            break;
        }
    }
    return 0;
}

// 상자 구현
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
                    if (m_pBox->iHP_Potion <= 0)
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
                        m_pBox->iHP_Potion--;
                        dynamic_cast<CInven*>(m_pInven)->Get_Inven()->iHP_Potion++;
                        cout << "포션을 꺼냈습니다" << endl;
                        pause();
                        continue;
                    }                    
                }
                else if (iChoice == 2)
                {
                    if (m_pBox->iMP_Potion <= 0)
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
                        m_pBox->iMP_Potion--;
                        dynamic_cast<CInven*>(m_pInven)->Get_Inven()->iMP_Potion++;
                        cout << "포션을 꺼냈습니다" << endl;
                        pause();
                        continue;
                    }
                }
            }
            break;
            
            case 2:
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
                        dynamic_cast<CInven*>(m_pInven)->Get_Inven()->iHP_Potion--;
                        m_pBox->iHP_Potion++;
                        cout << "포션을 집어넣었다" << endl;
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
                        dynamic_cast<CInven*>(m_pInven)->Get_Inven()->iMP_Potion--;
                        m_pBox->iMP_Potion++;
                        cout << "포션을 집어넣었다" << endl;
                        pause();
                        continue;
                    }
                }
            }
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
