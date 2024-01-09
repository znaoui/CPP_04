#include "Brain.hpp"

Brain::Brain()
{
        std::cout << "Brain Constructor Called" << std::endl;
}

Brain::~Brain()
{
        std::cout << "Brain Destructor Called" << std::endl;
}

Brain::Brain(Brain &copy)
{
        std::cout << "Copy Constructor Called" << std::endl;
        *this = copy;
}

Brain & Brain::operator=(Brain const &value)
{
        int     i;

        i = 0;
        std::cout << "Copy assignement operator called" << std::endl;
        while (i < 99)
        {
                this->_ideas[i] = value.getIdeas(i);
                i++;
        }
        return (*this);
}

std::string Brain::getIdeas(int i) const
{
    return (this->_ideas[i % 100]);
}

void    Brain::setIdeas(std::string content, int i)
{
    this->_ideas[i % 100] = content;
}