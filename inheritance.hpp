#include <iostream>
using std::cin;
using std::cout;

class A
{
public:
    virtual int foo();
    virtual int bar();
protected:
    static A* currentPokPok;
};

class B: public A
{
public:
    virtual int foo();
    virtual int bar();
    int baz();
    static A* getPokPok();
};
