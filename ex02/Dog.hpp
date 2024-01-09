#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
        private:
                Brain   *_brain;
        public:
                Dog();
                Dog(std::string name);
                Dog(Dog &copy);
                virtual ~Dog();
                Dog &operator=( Dog const & value );
                void    makeSound(void) const;
                Brain   *getBrain(void) const;
};

#endif