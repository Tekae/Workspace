/*
 *
 * Author: Rezniren
 *
 * File: Item.cpp
 *
 */


#include "Item.h"

Item::Item(){
    potionHealth();
    potionMana();
    
}

int Item::potionHealth(){
    pHealthAmount = 0;
    
    return true;
}

int Item::potionMana(){
    pManaAmount = 0;
    
    return true;
}

int Item::Sword(float weight, float damage, string type, string name){
    
    SwordType = type;
    SwordWeight = weight;
    Damage = damage;
    SwordName = name;
    
    
    return true;
}
