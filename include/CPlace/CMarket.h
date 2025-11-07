#pragma once
#include "CVillage.h"

class CMarket : public CVillage
{
public:
    CMarket();
    ~CMarket();
public:
    void Initialize();
    int Update();
    void Release();
public:
};