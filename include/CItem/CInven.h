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
public:
    INVENTORY* Get_Inven() {return m_pInven;}
private:
    INVENTORY* m_pInven;
};