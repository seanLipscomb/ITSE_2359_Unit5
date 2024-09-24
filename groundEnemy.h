#ifndef GROUNDENEMY_H
#define GROUNDENEMY_H

#include "enemy.h"
#include <iostream>
using namespace std;

class GroundEnemy : public Enemy 
{
    public:
        GroundEnemy(string name, int health) : Enemy(enemyName, maxHealth) {}
    
    void displayStatblock() const override {
        cout << "Ground Enemy - Name: " << name << ", Health: " << health << endl;
    }
}

#endif