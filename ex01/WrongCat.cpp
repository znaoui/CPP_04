#include "Animal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
        std::cout << "One WrongCat is now available." << std::endl;
        this->_type = "WrongCat";
}

WrongCat::WrongCat(std::string type)
{
        std::cout << "One WrongCat is now available." << std::endl;
        if (type == "WrongCat")
                this->_type = "WrongCat";
        else
                return ; 
}

WrongCat::WrongCat(WrongCat &copy)
{
        std::cout << "Copy WrongCat Constructor called." << std::endl;
        this->_type = copy.getType();
}

WrongCat::~WrongCat()
{
        std::cout << "One WrongCat is now unavailable." << std::endl;
}

WrongCat & WrongCat::operator=( WrongCat const & value )
{
		std::cout << "Copy WrontCat assignement operator called" << std::endl;
		this->_type = value.getType();
		return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "...Wrongmiaou Wrongmiaou" << std::endl;
}