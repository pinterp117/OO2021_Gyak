#include <iostream>
using namespace std;

#include "Warrior.h"
#include "Battle.h"

int main() {
    Warrior warrior1, warrior2;
    warrior1 = readWarrior();
    warrior2 = readWarrior();
    fightTilDeath(warrior1, warrior2);
    
    return 0;
}
