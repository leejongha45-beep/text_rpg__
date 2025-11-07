#pragma once
#include "CItem/CPotion.h"

class CHP_Potion : public CPotion
{
public:
    CHP_Potion();
    ~CHP_Potion();
public:
    void Initialize();
    void Update();
    void Release();
public:
    void Drink();
};
