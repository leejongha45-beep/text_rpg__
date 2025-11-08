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

enum VILLAGETYPE {MY_HOUSE = 1, ESQARE, ESHOP, VEND};
enum DUNGEONTYPE {LOW = 0, MIDDLE, HIGH, DEND};

typedef struct item
{
    int iHeal;
    int iGold;
}POTION;

enum POTIONTYPE {HP = 0, MP, PEND};

typedef struct table_
{
    int iHP_Potion;
    int iMP_Potion;
}INVENTORY;

typedef struct boxtable
{
    int iHP_Potion;
    int iMP_Potion;
}BOX;