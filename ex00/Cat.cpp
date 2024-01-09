#include "Animal.hpp"
#include "Cat.hpp"


Cat::Cat()
{
        std::cout << "One Cat is now available." << std::endl;
        this->_type = "Cat";
}

Cat::Cat(Cat &copy)
{
        std::cout << "Copy Cat Constructor called." << std::endl;
        this->_type = copy.getType();
}

Cat::~Cat()
{
        std::cout << "One Cat is now unavailable." << std::endl;
}

Cat & Cat::operator=( Cat const & value )
{
		std::cout << "Copy Cat assignement operator called" << std::endl;
		this->_type = value.getType();
		return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "miaou miaou" << std::endl;
}