

#include <string>
#include <iostream>
#include "human.hpp"


Human::Human(){
    name_ = "";
    age_ = 0;
}
// Human::Human(std::string name, size_t age){
//     name_ = name;
//     age_ = age;
// }
void Human::Display()
{
    std::cout<<"name: "<<name_<<", "<<"age: "<<age_<<"\n";
}