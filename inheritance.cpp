#include "inheritance.hpp"

//singleton magic
Device* Device::currentDevice = NULL;

int Device::foo(){}
int Device::bar(){}

int MicroDLSDevice::foo(){}
int MicroDLSDevice::bar(){}
int MicroDLSDevice::baz(){cout << "baz, currentDevice = " << currentDevice << '\n'; return 0;}

int DLSDevice::foo(){}
int DLSDevice::bar(){}
int DLSDevice::quux(){cout << "quux, currentDevice = " << currentDevice << '\n'; return 0;}

Device* MicroDLSDevice::getCurrentDevice()
{
    if (Device::currentDevice == NULL){
        Device::currentDevice = new MicroDLSDevice();
    }
    return Device::currentDevice;
}
