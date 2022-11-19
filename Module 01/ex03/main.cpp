#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
{
    Weapon weapon = Weapon("Battle axe");
    HumanA Zodd("Zodd", weapon);
    Zodd.attack();
    weapon.setType("Cleaver blade");
    Zodd.attack();
}
{
    Weapon weapon = Weapon("Thorned sword");
    HumanB Skull_knight("Skull knight");
    Skull_knight.setWeapon(weapon);
    Skull_knight.attack();
    weapon.setType("Sword of Beherits");
    Skull_knight.attack();
}
return 0;
}