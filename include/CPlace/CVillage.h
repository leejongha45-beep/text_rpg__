#pragma once
#include "CPlace.h"

class CVillage : public CPlace
{
public:
    CVillage();
    ~CVillage();
public:
    void Initialize();
    int Update();
    void Release();
};

