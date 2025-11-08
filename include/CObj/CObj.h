#pragma once
#include "Define.h"

class CObj
{
public:
    CObj();
    virtual ~CObj();
public:
    void Initialize();
    void Update();
    void Release();
public:
    virtual void Attack() = 0;
    virtual void ShowStatus() = 0;
    virtual PLAYERSTATUS* Get_Status() {return nullptr;}
};