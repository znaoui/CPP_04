#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
        std::cout << "WrongAnimal Constructor Called" << std::endl;
        this->_type = "undefined type";
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;	
	*this = copy;
}

WrongAnimal::WrongAnimal(std::string type)
{
        std::cout << "WrongAnimal Constructor Called" << std::endl;
        this->_type = type;
}

WrongAnimal::~WrongAnimal()
{
        std::cout << "WrongAnimal Destructor Called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & value )
{
	std::cout << "Copy WrongAnimal assignement operator called" << std::endl;
	this->_type = value.getType();
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

void    WrongAnimal::makeSound(void) const
{
	std::cout << "What does the " << _type << " says?" << std::endl;
}