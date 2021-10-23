#ifndef WARRIOR_H
#define WARRIOR_H

#include <string>

struct Warrior {
    std::string name;
    int health_points;
    int damage;
    int defense;
};

Warrior readWarrior();
void printWarrior(const Warrior& warrior);
void attack(const Warrior& attacker, Warrior& defender);
bool isAlive(const Warrior& warrior);

#endif