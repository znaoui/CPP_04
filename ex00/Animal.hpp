#ifndef ANIMAL_CPP
# define ANIMAL_CPP
# include <iostream>

class Animal
{
        protected:
                std::string _type;
        public:
                Animal();
                Animal(Animal &copy);
                Animal(std::string type);
                virtual ~Animal();
                
                Animal &operator=( Animal const &value );
                std::string     getType() const;
                void            setType(std::string type);
                virtual void    makeSound(void) const;
};


#endif