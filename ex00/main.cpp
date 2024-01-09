#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    std::cout << "\033[1;32mAn animal\033[m" << std::endl;
    const Animal* meta = new Animal("Fox");
    std::cout << std::endl << "\033[1;32mA cat\033[m" << std::endl;
    const Animal* i = new Cat();
    std::cout << std::endl << "\033[1;32mA dog\033[m" << std::endl;
    const Animal* j = new Dog();
    std::cout << std::endl << "\033[1;32mA wrong animal\033[m" << std::endl;
    const WrongAnimal* k = new WrongCat();
    
    std::cout << std::endl << std::endl << "\033[1;32mThe different type of animal\033[m" << std::endl;
    std::cout << std::endl << meta->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    
    std::cout << std::endl << std::endl << "\033[1;32mSound of animals : \033[m" << std::endl;
    
    i->makeSound();
    j->makeSound(); 
    meta->makeSound(); 
    k->makeSound();
    std::cout << std::endl << std::endl <<  "\033[1;31mDeleting all animals : \033[m" << std::endl;
    
    delete i;
    std::cout << std::endl;
    delete j;
    std::cout << std::endl;
    delete k;
    std::cout << std::endl;
    delete meta;
}