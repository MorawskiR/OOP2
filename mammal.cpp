#include "mammal.hpp"
#include <iostream>
#include <string>

mammal::mammal(std::string name)
: name_(name){}
void mammal::display()
{
    std::cout<<"name: "<<name_;
}