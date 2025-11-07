#pragma once
#include "CObj.h"
#include "Define.h"

class CPlayer : public CObj
{
public:
    CPlayer();
    ~CPlayer();
public:
    void Initialize();
    void Update();
    void Release();
public:
    void Attack();
    void ShowStatus();
    PLAYERSTATUS* Get_Status() {return m_pStatus;}
protected:
    PLAYERSTATUS* m_pStatus;
};