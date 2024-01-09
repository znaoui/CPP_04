#include "Animal.hpp"
#include "Dog.hpp"


Dog::Dog()
{
        std::cout << "One dog has arrived." << std::endl;
        this->_type = "Dog";
        _brain = new Brain();
}

Dog::Dog(Dog &copy)
{
        std::cout << "Copy Dog Constructor called." << std::endl;
        this->_type = copy.getType();
        _brain = new Brain();
}

Dog::~Dog()
{
        std::cout << "One dog has destroyed." << std::endl;
        delete _brain;
}

Dog & Dog::operator=( Dog const & value )
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_type = value.getType();
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "wouf wouf" << std::endl;
}

Brain *Dog::getBrain(void)const
{
    return (this->_brain);
}