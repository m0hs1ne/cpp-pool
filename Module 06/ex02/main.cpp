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
    std::srand(time(NULL));
    int r = std::rand() % 3;
    if (r == 0)
    {
        std::cout << "A" << std::endl;
        return new A();
    }
    if (r == 1)
    {
        std::cout << "B" << std::endl;
        return new B();
    }
    std::cout << "C" << std::endl;
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
}

void identify(Base &p)
{
    identify(&p);
}

int main()
{
    Base *p = generate();
    identify(p);
    identify(*p);
    delete p;
    return 0;
}
