#include "Animal.hpp"
#include "Dog.hpp"


Dog::Dog()
{
        std::cout << "One Dog has arrived." << std::endl;
        this->_type = "Dog";
}

Dog::Dog(Dog &copy)
{
        std::cout << "Copy Dog Constructor called." << std::endl;
        this->_type = copy.getType();
}

Dog::~Dog()
{
        std::cout << "One Dog has destroyed." << std::endl;
}

Dog & Dog::operator=( Dog const & value )
{
		std::cout << "Copy Dog assignement operator called" << std::endl;
		this->_type = value.getType();
		return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "wouf wouf" << std::endl;
}