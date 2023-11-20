

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

void Human::setName(std::string name){
    name_ = name;
}
void Human::setAge(size_t age)
{
    if(age > 0 ){ age_ = age ;} //nietrywialne przypisanie
}
std::string Human::getName(){return name_;};
size_t Human::getAge() {return age_;};

