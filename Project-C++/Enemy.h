/*
 *
 * Author: Rezniren
 *
 * File: Enemy.h
 *
 */


#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include "Player.h"
#include "Item.h"
#include "Inventory.h"

using namespace std;
class Enemy
{
public:
    Enemy();
    
    int stats();
    
    void spellBook();
    
    void backPack();
    
    int enemyAttackSequence(int hp, int ehp,string ename,int eattack);
    
    int RNG(int repeat, int minimum, int maximum);
    
    string Name;
    
    int Hp;
    
    int Attack;
};
