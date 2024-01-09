#include "Animal.hpp"

Animal::Animal()
{
        std::cout << "Animal Constructor Called" << std::endl;
        this->_type = "undefined type";
}

Animal::Animal(Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;	
	*this = copy;
}

Animal::Animal(std::string type)
{
        std::cout << "Animal Constructor Called" << std::endl;
        this->_type = type;
}

Animal::~Animal()
{
        std::cout << "Animal Destructor Called" << std::endl;
}

Animal & Animal::operator=( Animal const & value )
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_type = value.getType();
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}

void    Animal::makeSound(void) const
{
	std::cout << "What does the " << _type << " says?" << std::endl;
}