#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
        private:
                
        public:
                WrongCat();
                WrongCat(std::string name);
                WrongCat(WrongCat &copy);
                virtual ~WrongCat();
                WrongCat &operator=( WrongCat const & value );
                void    makeSound(void) const;
};

#endif