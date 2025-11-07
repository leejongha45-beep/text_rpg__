#pragma once
#include "CVillage.h"

class CHome : public CVillage
{
public:
    CHome();
    ~CHome();
public:
    void Initialize();
    int Update();
    void Release();
public:
    void Sleep();
    void InBox();
};