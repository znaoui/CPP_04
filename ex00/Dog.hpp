#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
        private:
                
        public:
                Dog();
                Dog(Dog &copy);
                ~Dog();
                Dog &operator=( Dog const & value );
                virtual void    makeSound(void) const;
};

#endif