#pragma once
#include "Define.h"

class CObj
{
public:
    CObj();
    ~CObj();
public:
    virtual void Initialize() = 0;
    virtual void Update() = 0;
    virtual void Release() = 0;
public:
    virtual void Attack() = 0;
    virtual void ShowStatus() = 0;
    virtual PLAYERSTATUS* Get_Status() {return nullptr;}
};