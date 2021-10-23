#include <iostream>
#include <string>
using namespace std;

void printStatus(string& name1, int hp1, int dmg1, string& name2, int hp2, int dmg2) {
    cout << name1 << " (HP: " << hp1 << " DMG: " << dmg1 <<")  ---  " << name2 <<" (HP: " << hp2 << " DMG: " << dmg2 << ")" << endl;
}

void attack(string& attacker_name, int& attacker_hp, int& attacker_dmg, string& defender_name, int& defender_hp, int& defender_dmg) {
    printStatus(attacker_name, attacker_hp, attacker_dmg, defender_name, defender_hp, defender_dmg);
    defender_hp-=attacker_dmg;
    if (defender_hp<0) defender_hp=0;
}

int main() {
    int hp1, dmg1, hp2, dmg2;
    string name1, name2;
    cin >> name1 >> hp1 >> dmg1 >> name2 >> hp2 >> dmg2;

    while (hp1>0 && hp2>0) {
        attack(name1, hp1, dmg1, name2, hp2, dmg2);
        if (hp2>0) attack(name2, hp2, dmg2, name1, hp1, dmg1);
    }
    printStatus(name1, hp1, dmg1, name2, hp2, dmg2);

    return 0;
}
