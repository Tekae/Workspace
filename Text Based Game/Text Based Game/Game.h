/*
 *
 * Author: Rezniren
 *
 * File: Game.h
 *
 */


#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include "Enemy.h"
#include "Player.h"
#include "Item.h"
#include "Inventory.h"
#include "time.h"

using namespace std;
class Game
{
public:
    Game();
    Enemy Enemy;
    Player Player;
    void Run();
    void Start();
    
    int RNG(int repeat,int minimum,int maximum);
    
    int playerAttackSequence();
    int enemyAttackSequence();
    void hub();
    int levelUp();
    int expGain();
    //int Game::playerSpellAttackSequence(string spells);
    
    string move;
    
    int next;
    
    bool attackTrue;
    
    bool spellTrue;
    
    bool itemTrue;
    
    
};

