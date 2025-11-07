#pragma once

#define SAFE_DELETE(p) if (!p) {delete p; p = nullptr;}
#define MAX_HP(lv) 100+20*(lv-1)
#define MAX_EXP(lv) 50+20*(lv-1)
#define MAX_MP(lv) 10+20*(lv-1)

typedef struct table
{
    char ClassName[32];
    int iLevel;
    int iHP;
    int iMP;
    int iEXP;
    int iGold;
    int iATP;
    int iMTP;
}PLAYERSTATUS;

enum LOCATIONTYPE {HOME = 1, SQARE, MARKET, DUNGEON_ENTRANCE,  END};

typedef struct item
{
    int iHP_Potion;
    int iMP_Potion;
}ITEMTABLE;

typedef struct potion
{
    int iCount;
    int iGold;
    int iHeal;
}POTION;
