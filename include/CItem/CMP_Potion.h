#pragma once
#include "CItem/CPotion.h"

class CMP_Potion : public CPotion
{
public:
    CMP_Potion();
    ~CMP_Potion();
public:
    void Initialize();
    void Update();
    void Release();
public:
    void Drink();
};
