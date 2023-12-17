#pragma once
#include <iostream>
#include "swimmable.hpp"
class malpa : public Swimmable
{
    size_t age_; 
    std::string name_;
public:
    malpa()
    {
        age_ = 10;
        name_ = "name";
    }
    void swim() override
    {
        std::cout<<"I am swimming.\n";
        std::cout<<name_<<" " << age_;
    }
};