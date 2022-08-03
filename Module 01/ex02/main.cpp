#include <iostream>

int main()
{
    std::string brain = "Judeau";
    std::string *brainPtr = &brain;
    std::string &brainRef = brain;
    std::cout << &brain << " " << brainPtr << " " << &brainRef << std::endl;
    std::cout << brain << " " << *brainPtr << " " << brainRef << std::endl;
    return 0;
}