#include "inheritance.hpp"

int main (int argc, char** argv)
{
    Device* pointer;
    pointer = nullptr;
    pointer = MicroDLSDevice::getCurrentDevice();

    auto newpointer = dynamic_cast<MicroDLSDevice*>(pointer);
    cout << newpointer << "  " << pointer << '\n';

    return 0;
}
