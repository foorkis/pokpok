#include <iostream>
using std::cin;
using std::cout;

class Device
{
public:
    virtual int foo();
    virtual int bar();
protected:
    static Device* currentDevice;
};

class DLSDevice: public Device
{
public:
    virtual int foo();
    virtual int bar();
    int quux();
    static Device* getCurrentDevice();
};

class MicroDLSDevice: public Device
{
public:
    virtual int foo();
    virtual int bar();
    int baz();
    static Device* getCurrentDevice();
};
