#pragma once
#include "Define.h"
#include "CItem/CItem.h"

class CPotion : public CItem
{
public:
    CPotion();
    ~CPotion();
public:
    void Initialize();
    void Update();
    void Release();
private:
    POTION* m_pPotion;
};