/*
 *
 * Author: Rezniren
 *
 * File: Inventory.h
 *
 */


#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include "Enemy.h"
#include "Player.h"
#include "Item.h"

using namespace std;
class Inventory
{
public:
    Inventory();
    void Menu(int hp, int ehp, int mana, string bagslotone, string bagslottwo, int potionhealthamount, int potionhealthrestore, int potionmanaamount, int potionmanarestore);
    
    int gold;
    
};
