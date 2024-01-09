#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
        private:
                Brain   *_brain;
        public:
                Cat();
                Cat(std::string name);
                Cat(Cat &copy);
                virtual ~Cat();
                Cat &operator=( Cat const & value );
                void    makeSound(void) const;
                Brain   *getBrain(void) const;
};

#endif