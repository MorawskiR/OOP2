#pragma once
#include <string>

class Human{
public:
    Human();
    //Human(std::string name, size_t age);

    Human(std::string name, size_t age)
    : name_(name), age_(age) {}
    
    Human(std::string name)
    :Human(name, 50){}

    void Display();
private:
    std::string name_;
    size_t age_;
};
