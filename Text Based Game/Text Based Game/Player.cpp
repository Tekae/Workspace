/*
 *
 * Author: Rezniren
 *
 * File: Player.cpp
 *
 */


#include "Player.h"

Player::Player()
{
    stats();
    spellBook();
    backPack();
    
    
    
}

int msleeep(unsigned long milisec){
    struct timespec req={0};
    time_t sec=(int)(milisec/1000);
    milisec=milisec-(sec*1000);
    req.tv_sec=sec;
    req.tv_nsec=milisec*1000000L;
    while (nanosleep(&req,&req)==-1)
        continue;
    return 1;
}

int Player::stats(){
    
    Level = 1;
    
    Mana = 50;
    
    Exp = 0.0f;
    
    XPCap = 100.0f;
    
    Hp = 100;
    
    HpCap = 100;
    
    Attack = 15;
    
    return true;
}

int Player::turn(){
    
    
    
    return true;
}

void Player::spellBook(){
    
    magicSlotOne = "Fire";
    
    magicSlotTwo = "Ice";
    
    magicFire = 25;
    
    manaFire = 5;
    
    magicIce = 35;
    
    manaIce = 30;
    
    magicShadow = 100;
    
    manaShadow = 100;
}

void Player::backPack(){
    
    bagSlotOne = "Potion";
    
    bagSlotTwo = "Mana";
    
    potionHealthAmount = 5;
    
    potionHealthRestore = 25;
    
    potionManaAmount = 6;
    
    potionManaRestore = 40;
    
    gold = 1000;
}

int Player::playerAttackSequence(int hp, int ehp,string ename,int pattack, bool attacktrue){ // Basic  Player Attack
    
    int Hp = hp;
    int EHp = ehp;
    string EName = ename;
    int Attack = pattack;
    bool attackTrue = attackTrue;
    
    if (EHp >= 1 && Hp >= 1){
        
        msleeep(1500);
        
        EHp = EHp - Attack;
    }
    
    ehp = EHp;
    
    attackTrue = false;
    
    
    return EHp;
}

int Player::PlayerSpellFire(string choice, string magicslotone, string magicslottwo, int mana, int ehp, string ename, bool spelltrue , int manafire, int magicfire){ // Spell Player Fire Attack
    
    string spellChoice = choice;
    string magicSlotOne = magicslotone;
    string magicSlotTwo = magicslottwo;
    int Mana = mana;
    //int Hp = hp;
    int EHp = ehp;
    string EName = ename;
    bool spellTrue = spelltrue;
    int manaFire = manafire;
    int magicFire = magicfire;
    
    
    if ((spellChoice == "Fire" || spellChoice == "fire") && (magicSlotOne == "Fire" || magicSlotOne == "fire" || magicSlotTwo == "Fire" || magicSlotTwo == "fire") && (Mana > manaFire)){
        
        cout << endl;
        
        Mana = Mana - manaFire;
        
        cout << "You Send a fireball flying at " << EName << "." << endl << endl;
        msleeep(1500);
        
        
        EHp = EHp - magicFire;
        
        
        spellTrue = false;
    }
    else if ((spellChoice == "Fire" || spellChoice == "fire") && (magicSlotOne == "Fire" || magicSlotOne == "fire" || magicSlotTwo == "Fire" || magicSlotTwo == "fire") && (Mana < manaFire)){
        
        cout << "You don't have enough Mana!" << endl << endl;
        spellTrue = false;
    }
    
    return EHp;
}

int Player::PlayerManaFire(string choice, string magicslotone, string magicslottwo, int mana, int ehp, string ename, bool spelltrue , int manafire, int magicfire){
    
    string spellChoice = choice;
    string magicSlotOne = magicslotone;
    string magicSlotTwo = magicslottwo;
    int Mana = mana;
    string EName = ename;
    int manaFire = manafire;
    
    Mana -= manaFire;
    
    return Mana;
}

int Player::PlayerSpellIce(string choice, string magicslotone, string magicslottwo, int mana, int ehp, string ename, bool spelltrue , int manaice, int magicice){ // Spell Player Ice Attack
    
    string spellChoice = choice;
    string magicSlotOne = magicslotone;
    string magicSlotTwo = magicslottwo;
    int Mana = mana;
    //int Hp = hp;
    int EHp = ehp;
    string EName = ename;
    bool spellTrue = spelltrue;
    int manaIce = manaice;
    int magicIce = magicice;
    
    
    if ((spellChoice == "Ice" || spellChoice == "ice") && (magicSlotOne == "Ice" || magicSlotOne == "ice" || magicSlotTwo == "Ice" || magicSlotTwo == "ice") && (Mana > manaIce)){
        
        cout << endl;
        
        Mana = Mana - manaIce;
        
        cout << "You Send a large spear of ice flying at " << EName << "." << endl << endl;
        msleeep(1500);
        
        
        EHp = EHp - magicIce;
        
        
        spellTrue = false;
    }
    else if ((spellChoice == "Ice" || spellChoice == "ice") && (magicSlotOne == "Ice" || magicSlotOne == "ice" || magicSlotTwo == "Ice" || magicSlotTwo == "ice") && (Mana < manaIce)){
        
        cout << "You don't have enough Mana!" << endl << endl;
        spellTrue = false;
    }
    
    return EHp;
}

int Player::PlayerManaIce(string choice, string magicslotone, string magicslottwo, int mana, int ehp, string ename, bool spelltrue , int manaice, int magicice){
    
    string spellChoice = choice;
    string magicSlotOne = magicslotone;
    string magicSlotTwo = magicslottwo;
    int Mana = mana;
    string EName = ename;
    int manaIce = manaice;
    
    Mana -= manaIce;
    
    return Mana;
}

int Player::PlayerSpellShadow(string choice, string magicslotone, string magicslottwo, int mana, int ehp, string ename, bool spelltrue , int manashadow, int magicshadow){ // Spell Player Shadow Attack
    
    string spellChoice = choice;
    string magicSlotOne = magicslotone;
    string magicSlotTwo = magicslottwo;
    int Mana = mana;
    //int Hp = hp;
    int EHp = ehp;
    string EName = ename;
    bool spellTrue = spelltrue;
    int manaShadow = manashadow;
    int magicShadow = magicshadow;
    
    if ((spellChoice == "Shadow" || spellChoice == "shadow") && (magicSlotOne == "Shadow" || magicSlotOne == "shadow" || magicSlotTwo == "Shadow" || magicSlotTwo == "shadow") && (Mana > manaShadow)){
        
        cout << endl;
        
        Mana = Mana - manaShadow;
        
        cout << "You Send a Pulse of darkness at " << EName << "." << endl << endl;
        msleeep(1500);
        
        
        EHp = EHp - magicShadow;
        
        
        spellTrue = false;
    }
    else if ((spellChoice == "Shadow" || spellChoice == "shadow") && (magicSlotOne == "Shadow" || magicSlotOne == "shadow" || magicSlotTwo == "Shadow" || magicSlotTwo == "shadow") && (Mana < manaShadow)){
        
        cout << "You don't have enough Mana!" << endl << endl;
        spellTrue = false;
    }
    
    return EHp;
    
}

int Player::PlayerManaShadow(string choice, string magicslotone, string magicslottwo, int mana, int ehp, string ename, bool spelltrue , int manashadow, int magicshadow){
    
    string spellChoice = choice;
    string magicSlotOne = magicslotone;
    string magicSlotTwo = magicslottwo;
    int Mana = mana;
    string EName = ename;
    int manaShadow = manashadow;
    
    Mana -= manaShadow;
    
    return Mana;
}

int Player::levelUp(){
    
    return true;
}
