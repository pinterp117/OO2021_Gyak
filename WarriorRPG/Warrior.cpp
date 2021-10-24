#include "Warrior.h"
#include <iostream>

void Warrior::readFromKeyboard() {
    std::cin >> name >> health_points >> damage >> defense;
}

std::string Warrior::toString() const {
    return  
    name 
    + " ["
    + " HP: " +  std::to_string(health_points) 
    + " DMG: " + std::to_string(damage)
    + " DEF: " + std::to_string(defense)
    + " ]";
}

void Warrior::attack(Warrior& defender) const {
    int actual_damage = damage - defender.defense;
    if (actual_damage > 0) {
        defender.health_points -= actual_damage;
        if (!defender.isAlive()) defender.die();
    }
}

bool Warrior::isAlive() const {
    return health_points > 0;
}

void Warrior::die() {
    name += " DEAD";
    health_points = 0;
    damage = 0;
    defense = 0;
}
