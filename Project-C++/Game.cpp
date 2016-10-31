/*
 *
 * Author: Rezniren
 *
 * File: Game.cpp
 *
 */


#include "Game.h"

Game::Game()
{
    Run();
}

void Game::Run(){
    
    Start();
    
}

int msleep(unsigned long milisec){ //	msleep(time in Miliseconds);
    
    struct timespec req={0};
    time_t sec=(int)(milisec/1000);
    milisec=milisec-(sec*1000);
    req.tv_sec=sec;
    req.tv_nsec=milisec*1000000L;
    while(nanosleep(&req,&req)==-1)
        continue;
    return 1;
}

void Game::Start(){
    Inventory Inv;
    
    while (Player.Hp >= 1 && Player.Hp >= 1){
        
        cout << "Player HP: " << Player.Hp << "     Enemy Hp: " << Enemy.Hp << endl << "Player MP: " << Player.Mana << endl;
        cout << "|Attack|Spells|Items|\n>>> ";
        
        cin >> move;
        
        if (move == "attack" || move == "Attack"){ //Standard Combat
            
            Enemy.Hp = Player.playerAttackSequence(Player.Hp, Enemy.Hp, Enemy.Name, Player.Attack, true);
            
            Player.Hp = Enemy.enemyAttackSequence(Player.Hp, Enemy.Hp, Enemy.Name, Enemy.Attack);
            
        }
        else if (move == "spells" || move == "Spells"){ //Opens Spell Menu
            cout << "Opening SpellBook..." << endl << endl;
            
            msleep(1500);
            
            spellTrue = true;
            while (spellTrue == true){
                
                
                //cout << "Player HP: " << Player.Hp << " Enemy Hp: " << Enemy.Hp << endl;
                cout << "|" << Player.magicSlotOne << "|" << Player.magicSlotTwo << "|Back|" << endl << ">>> ";
                
                string spellChoice;
                cin >> spellChoice;
                string choiceTest = spellChoice;
                
                if (spellChoice == "Fire" || spellChoice == "fire") {
                    Enemy.Hp = Player.PlayerSpellFire(spellChoice, Player.magicSlotOne, Player.magicSlotTwo, Player.Mana, Enemy.Hp, Enemy.Name, true, Player.manaFire, Player.magicFire);
                    Player.Mana = Player.PlayerManaFire(spellChoice, Player.magicSlotOne, Player.magicSlotTwo, Player.Mana, Enemy.Hp, Enemy.Name, true, Player.manaFire, Player.magicFire);
                }
                else if (spellChoice == "Ice" || spellChoice == "ice") {
                    Enemy.Hp = Player.PlayerSpellIce(spellChoice, Player.magicSlotOne, Player.magicSlotTwo, Player.Mana, Enemy.Hp, Enemy.Name, true, Player.manaIce, Player.magicIce);
                    Player.Mana = Player.PlayerManaIce(spellChoice, Player.magicSlotOne, Player.magicSlotTwo, Player.Mana, Enemy.Hp, Enemy.Name, true, Player.manaIce, Player.magicIce);
                }
                else if (spellChoice == "Shadow" || spellChoice == "shadow") {
                    Enemy.Hp = Player.PlayerSpellShadow(spellChoice, Player.magicSlotOne, Player.magicSlotTwo, Player.Mana, Enemy.Hp, Enemy.Name, true, Player.manaShadow, Player.magicShadow);
                    Player.Mana = Player.PlayerManaShadow(spellChoice, Player.magicSlotOne, Player.magicSlotTwo, Player.Mana, Enemy.Hp, Enemy.Name, true, Player.manaShadow, Player.magicShadow);
                }
                if (spellChoice == "Back" || "back"){
                    spellTrue = false;
                    spellChoice = "---";
                }
                
            }
        }
        else if (move == "items" || move == "Items"){ //Opens Bag Menu
            cout << "Opening Inventory..." << endl << endl;
            
            msleep(1500);
            
            Inv.Menu(Player.Hp, Enemy.Hp, Player.Mana, Player.bagSlotOne, Player.bagSlotTwo, Player.potionHealthAmount, Player.potionHealthRestore, Player.potionManaAmount, Player.potionManaRestore);
            
            
        }
        
        
    }
    if (Enemy.Hp < 1 && Player.Hp >= 1){
        
        cout << "You win!!" << endl;
        
        
        expGain();
        if (Player.Exp >= Player.XPCap){
            levelUp();
        }
        
    }
    
}

void Game::hub(){ // Post Tutorial Main Menu
    cout << "|Nexus|Store|Stats|" << endl << ">>> ";
}

int Game::RNG(int repeat, int minimum, int maximum){ // Random Number Generator (NoI, LPN, HN)
    
    srand(time(NULL));
    int ran, count;
    int min = minimum;
    int max = maximum;
    int over = repeat;
    
    count = 0;
    
    while (count < over){
        count += 1;
        ran = (rand() * 33.3);
        ran = (rand() % max) + min;
        //cout << "\nThis is a pseudo random number: "<< ran << endl <<"(for use with setting up the enemy attack system in the future)\n\n";
        
    }
    
    return ran;
}

int Game::levelUp(){ // Player Level Up
    Player.levelUp();
    
    return true;
}

int Game::expGain(){ // Player Exp Gain
    
    return true;
}
