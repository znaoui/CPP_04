#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
        private:
                
        public:
                Cat();
                Cat(Cat &copy);
                ~Cat();
                Cat &operator=( Cat const & value );
                virtual void    makeSound(void) const;
};

#endif