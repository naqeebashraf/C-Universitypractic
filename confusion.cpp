#include <iostream>
using namespace std;

class Base
{
public:
    void foo()
    {
        cout << "Base foo()" << endl;
    }
};

class Derived1 : public Base
{
public:
    void foo()
    {
        cout << "Derived1 foo()" << endl;
    }
};

class Derived2 : public Base
{
public:
    void foo()
    {
        cout << "Derived2 foo()" << endl;
    }
};

class MultipleDerived : public Derived1, public Derived2
{
public:
    void foo()
    {
        // Ambiguity here, which foo() to call?
        // Using scope resolution to specify which base class's foo() to call
        Derived1::foo(); // Calling Derived1's foo()scope resolution
       Derived2::foo(); // Calling Derived2's foo()
    }
};

int main()
{
    MultipleDerived md;
    md.foo(); // Calls foo() from Derived1 and Derived2 using scope resolution

    return 0;
}

