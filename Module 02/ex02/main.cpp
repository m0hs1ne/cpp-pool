#include "Fixed.hpp"

int main()
{
    Fixed a(10);
    // Fixed b(10.1f);
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout <<  b << std::endl;
}