#ifndef ANIMAL_CPP
# define ANIMAL_CPP
# include <iostream>
# include "Brain.hpp"

class Animal
{
        protected:
                std::string _type;
                Animal();
                Animal(Animal &copy);
                Animal(std::string type);
        public:
                virtual ~Animal();
                
                Animal &operator=( Animal const &value );
                std::string     getType() const;
                void            setType(std::string type);
                virtual void    makeSound(void) const = 0;
                virtual Brain   *getBrain(void) const = 0;
};


#endif