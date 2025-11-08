#pragma once
#include "Define.h"

class CObj;

class CItem
{
public:
    CItem();
    virtual ~CItem();
public:
    void Initialize();
    void Update();
    void Release();
protected:
};