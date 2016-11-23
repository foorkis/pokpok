#include "inheritance.hpp"

//singleton magic
A* A::currentPokPok = NULL;

int A::foo(){}
int A::bar(){}

int B::foo(){}
int B::bar(){}
int B::baz(){cout << "baz"; return 0;}

A* B::getPokPok()
{
    if (A::currentPokPok == NULL){
        A::currentPokPok = new B();
    }
    return A::currentPokPok;
}
