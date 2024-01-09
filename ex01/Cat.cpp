#include "Animal.hpp"
#include "Cat.hpp"


Cat::Cat()
{
        std::cout << "One Cat is now available." << std::endl;
        this->_type = "Cat";
        _brain = new Brain();
}

Cat::Cat(Cat &copy)
{
        std::cout << "Copy Cat Constructor called." << std::endl;
        this->_type = copy.getType();
        _brain = new Brain();
}

Cat::~Cat()
{
        std::cout << "One Cat is now unavailable." << std::endl;
        delete _brain;
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

Brain *Cat::getBrain(void)const
{
    return (this->_brain);
}