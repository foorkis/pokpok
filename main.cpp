#include "inheritance.hpp"

int main (int argc, char** argv)
{
    Device* pointer;
    pointer = nullptr;
    pointer = MicroDLSDevice::getCurrentDevice();

    auto autoDLSPointer = dynamic_cast<DLSDevice*>(pointer);
    auto autoMicroDLSPointer = dynamic_cast<MicroDLSDevice*>(pointer);

    DLSDevice* DLSPointer = dynamic_cast<DLSDevice*>(pointer);
    MicroDLSDevice* MicroDLSPointer = dynamic_cast<MicroDLSDevice*>(pointer);
    autoDLSPointer->quux();
    autoMicroDLSPointer->baz();

    DLSPointer->quux();
    MicroDLSPointer->baz();
    return 0;
}
