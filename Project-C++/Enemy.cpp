/*
 *
 * Author: Rezniren
 *
 * File: Enemy.cpp
 *
 */


#include "Enemy.h"

Enemy::Enemy()
{
    stats();
    
}

int msleeeep(unsigned long milisec){
    struct timespec req={0};
    time_t sec=(int)(milisec/1000);
    milisec=milisec-(sec*1000);
    req.tv_sec=sec;
    req.tv_nsec=milisec*1000000L;
    while (nanosleep(&req,&req)==-1)
        continue;
    return 1;
}

int Enemy::stats(){
    Name = "Sheep";
    
    Hp = 100;
    
    Attack = 10;
    
    return true;
}


int Enemy::enemyAttackSequence(int hp, int ehp,string ename,int eattack){ // Basic Enemy Attack
    
    int Hp = hp;
    int EHp = ehp;
    string EName = ename;
    int EAttack = eattack;
    
    
    if (EHp >= 1 && Hp >= 1){
        
        RNG(100, 1, 100);
        
        msleeeep(1500);
        
        cout << EName << " attacks you." << endl << endl;
        
        Hp = Hp - EAttack;
    }
    return Hp;
}


int Enemy::RNG(int repeat, int minimum, int maximum){ // Random Number Generator (NoI, LPN, HN)
    
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
