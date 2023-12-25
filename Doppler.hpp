#include <iostream>
#include <string>
#include <memory>
#pragma once

class Doppler {
public:
    virtual std::string sayHello() { return "I'm Doppler!"; }
};

class Dwarf : public Doppler {
public:
    virtual std::string sayHello() { return "I'm Dwarf!"; }
};

class Elf : public Doppler {
public:
    virtual std::string sayHello() { return "I'm Elf!"; }
};

class Human : public Doppler {
public:
    virtual std::string sayHello() { return "I'm Human!"; }
};