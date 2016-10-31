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
    
}