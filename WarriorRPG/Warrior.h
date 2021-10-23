#ifndef WARRIOR_H
#define WARRIOR_H

#include <string>

class Warrior {
  public:
    void readFromKeyboard();
    void printToTerminal();
    void attack(Warrior& defender);
    bool isAlive();
  private:  
    std::string name;
    int health_points;
    int damage;
    int defense;
    void die();
};

#endif
