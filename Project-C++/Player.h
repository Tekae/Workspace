/*
 *
 * Author: Rezniren
 *
 * File: Player.h
 *
 */


#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include "Enemy.h"
#include "Item.h"
#include "Inventory.h"
#include "time.h"

using namespace std;
class Player
{
public:
    
    Player();
    
    int stats();
    
    
    int levelUp();
    
    void spellBook();
    
    int playerAttackSequence(int hp, int ehp,string ename,int pattack, bool attacktrue);
    
    int PlayerSpellFire(string choice, string magicslotone, string magicslottwo, int mana, int ehp, string ename, bool spelltrue , int manafire, int magicfire);
    
    int PlayerManaFire(string choice, string magicslotone, string magicslottwo, int mana, int ehp, string ename, bool spelltrue , int manafire, int magicfire);
    
    int PlayerSpellIce(string choice, string magicslotone, string magicslottwo, int mana, int ehp, string ename, bool spelltrue , int manaice, int magicice);
    
    int PlayerManaIce(string choice, string magicslotone, string magicslottwo, int mana, int ehp, string ename, bool spelltrue , int manaice, int magicice);
    
    int PlayerSpellShadow(string choice, string magicslotone, string magicslottwo, int mana, int ehp, string ename, bool spelltrue , int manashadow, int magicshadow);
    
    int PlayerManaShadow(string choice, string magicslotone, string magicslottwo, int mana, int ehp, string ename, bool spelltrue , int manashadow, int magicshadow);
    
    
    void backPack();
    
    int turn();
    
    //Stats
    int Level;
    
    int Mana;
    
    float Exp;
    
    float XPCap;
    
    int Hp;
    
    int HpCap;
    
    int Attack;
    
    //SpellBook
    string magicSlotOne;
    
    string magicSlotTwo;
    
    int magicFire;
    
    int manaFire;
    
    int magicIce;
    
    int manaIce;
    
    int magicShadow;
    
    int manaShadow;
    
    //BackPack
    string bagSlotOne;
    
    string bagSlotTwo;
    
    int potionHealthAmount;
    
    int potionHealthRestore;
    
    int potionManaAmount;
    
    int potionManaRestore;
    
    int gold;
    
    
};
