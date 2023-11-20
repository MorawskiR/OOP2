#pragma once
#include <string>

class Human{
public:
    Human();
    //Human(std::string name, size_t age);

    Human(std::string name, size_t age)
    : name_(name), age_(age) {}
    
    // Human(std::string name)
    // :Human(name, 50){} // lista inicjalizacyjna

   

     // Human(std::string name)
    // :Human(name, 50){} // lista inicjalizacyjna
    //settery
    void setName(std::string name);
    void setAge(size_t age);
    //gettery
    std::string getName() ;
    size_t getAge();
private:
    std::string name_;
    size_t age_;
};
