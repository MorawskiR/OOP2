#include "Doppler.hpp"

int main() {
    std::shared_ptr<Doppler> doppler1 = std::make_shared<Dwarf>();
    std::shared_ptr<Doppler> doppler2 = std::make_shared<Elf>();
    std::shared_ptr<Doppler> doppler3 = std::make_shared<Human>();

    std::cout << doppler1->sayHello() << '\n';
    std::cout << doppler2->sayHello() << '\n';
    std::cout << doppler3->sayHello() << '\n';
}
