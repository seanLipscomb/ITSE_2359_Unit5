#ifndef ENEMY_H
#define ENEMY_H

#include<string>
using namespace std;


class Enemy{
    private:
    //attributes
    string name;
    int health;

    public:
    //behaviors
    virtual void displayStatblock() const = 0;

    protected:
    //contructor/destructor
    Enemy(string enemyName, int maxHealth);

    ~Enemy();
};
#endif