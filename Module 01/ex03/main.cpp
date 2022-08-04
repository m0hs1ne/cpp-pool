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
    Weapon weapon_ = Weapon("Thorned sword");
    HumanB Skull_knight("Skull knight");
    Skull_knight.setWeapon(weapon_);
    Skull_knight.attack();
    weapon_.setType("Sword of Beherits");
    Skull_knight.attack();
}
return 0;
}