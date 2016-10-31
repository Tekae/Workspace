/*
 *
 * Author: Rezniren
 *
 * File: Inventory.cpp
 *
 */


#include "Inventory.h"

Inventory::Inventory(){
    gold = 100;
    
}

void Inventory::Menu(int hp, int ehp, int mana, string bagslotone, string bagslottwo, int potionhealthamount, int potionhealthrestore, int potionmanaamount, int potionmanarestore ){
    int Hp = hp;
    int Ehp = ehp;
    int Mana = mana;
    string bagSlotOne = bagslotone;
    string bagSlotTwo = bagslottwo;
    int potionHealthAmount = potionhealthamount;
    int potionHealthRestore = potionhealthrestore;
    int potionManaAmount = potionmanaamount;
    int potionManaRestore = potionmanarestore;
    bool itemTrue;
    
    itemTrue = true;
    while (itemTrue == true){
        
        
        cout << "Player HP: " << Hp << " Enemy Hp: " << Ehp << endl;
        cout << "|" << bagSlotOne << "|" << bagSlotTwo << "|Back|" << endl << ">>> ";
        
        string bagChoice;
        cin >> bagChoice;
        
        if ((bagChoice == "Potion" || bagChoice == "potion") && (bagSlotOne == "Potion" || bagSlotTwo == "Potion")){
            if (potionHealthAmount > 0){
                cout << "You used a Health Potion!" << endl;
                potionHealthAmount -= 1;
                
                cout << "Player HP: " << Hp << " ---> ";
                Hp += potionHealthRestore;
                
                cout << Hp << endl;
                if (Hp > 100){
                    Hp = 100;
                }
                cout << Hp << endl;
                
            }
            itemTrue = false;
        }
        
        if ((bagChoice == "Mana" || bagChoice == "mana") && (bagSlotOne == "Mana" || bagSlotTwo == "Mana")){
            if (potionManaAmount > 0){
                cout << "You used a Mana Potion!" << endl;
                cout << "Mana: " << Mana << " ---> ";
                potionManaAmount -= 1;
                Mana += potionManaRestore;
                if (Mana > 100){
                    Mana = 100;
                }
                cout << Mana << endl;
                
            }
            itemTrue = false;
        }
        
        
        
        else if (bagChoice == "Back" || bagChoice == "back"){
            itemTrue = false;
        }
        else if (bagChoice != "mana" || bagChoice != "Mana" || bagChoice != "Potion" || bagChoice != "potion")
        {
            cout << "No Understand.";
            itemTrue = true;
            
        }
        
    }
}
