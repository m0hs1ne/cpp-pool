#include <iostream>

class Base
{
public:
    virtual ~Base() {}
};

class A : public Base
{
};
class B : public Base
{
};
class C : public Base
{
};

Base *generate()
{
    srand(time(NULL));
    int r = std::rand() % 3;
    if (r == 0)
        return new A();
    if (r == 1)
        return new B();
    return new C();
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}

void identify(Base &p)
{
    identify(&p);
}

int main()
{
    Base *p = generate();
    identify(p);
    delete p;
    return 0;
}
