#pragma once
#include "CItem.h"

class CInven : public CItem
{
public:
    CInven();
    ~CInven();
public:
    void Initialize();
    void Update();
    void Release();
};