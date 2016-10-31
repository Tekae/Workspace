/*
 *
 * Author: Rezniren
 *
 * File: Item.h
 *
 */


#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include "Enemy.h"
#include "Player.h"
#include "Inventory.h"

using namespace std;
class Item
{
public:
    Item();
    
    
    int potionHealth();
    int potionMana();
    int Sword(float weight, float damage, string type, string name);
    
    int pManaAmount;
    int pHealthAmount;
    
    float Damage;
    string SwordName;
    string SwordType;
    float SwordWeight;
};
