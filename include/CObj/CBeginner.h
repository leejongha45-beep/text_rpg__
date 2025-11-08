#pragma once
#include "CPlayer.h"

class CBeginner : public CPlayer
{
public:
    CBeginner();
    ~CBeginner();
public:
    void Initialize();
    void Update();
    void Release();
};