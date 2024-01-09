#ifndef WRONGANIMAL_CPP
# define WRONGANIMAL_CPP
# include <iostream>

class WrongAnimal
{
        protected:
                std::string _type;
        public:
                WrongAnimal();
                WrongAnimal(WrongAnimal &copy);
                WrongAnimal(std::string type);
                virtual ~WrongAnimal();
                
                WrongAnimal &operator=( WrongAnimal const &value );
                std::string     getType() const;
                void            setType(std::string type);
                virtual void    makeSound(void) const;
};


#endif