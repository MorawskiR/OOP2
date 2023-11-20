
#include "human.hpp"
int main()
{
    Human h;
    h.getName();
    h.getAge();

    Human adam{"Adam", 25};
    adam.getName();
    adam.getAge();

    // Human Ewa{"Ewa"}; 
    // Ewa.Display();

    Human Pan;
    Pan.setName("Henry");
    Pan.setAge(33);
   
}