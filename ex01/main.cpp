#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#define NUMBER_ANIMALS 10

int main(void)
{
        /*Animal  *animals[NUMBER_ANIMALS];
        Brain   *brain;
        int     i;

        i = 0;
        while (i < NUMBER_ANIMALS)
        {
                if (i < NUMBER_ANIMALS / 2)
                {
                        animals[i] = new Dog;
                        brain = animals[i]->getBrain();
                        brain->setIdeas("I will eat you!", i);
                }
                else
                {
                        animals[i] = new Cat;
                        brain = animals[i]->getBrain();
                        brain->setIdeas("I will love you!", i);
                }
                std::cout << "\033[1;33m" << animals[i]->getType() << "\033[0m" << std::endl;
                i++;
        }
        std::cout << std::endl;
        i = 0;
        while (i < NUMBER_ANIMALS)
        {
                brain = animals[i]->getBrain();
                std::cout << brain->getIdeas(i) << std::endl;
                i++;
        }        
        std::cout << std::endl;
        i = 0;
        while (i < NUMBER_ANIMALS)
                delete animals[i++];*/
        Dog basic;
        
        {
                Dog tmp = basic;
        }
        return 0;
}