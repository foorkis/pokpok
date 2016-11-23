#include "inheritance.hpp"

int main (int argc, char** argv)
{
    A* pointeru;
    pointeru = nullptr;
    pointeru = B::getPokPok();
    cout <<"hi"<<'\n';

    A* dynamic_cast <B*> (pointeru)->currentPokPok->baz();
    return 0;
}
