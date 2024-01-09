#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream> 

class   Brain
{
        private:
                std::string         _ideas[100];
        public:
                Brain();
                Brain(Brain &copy);
                ~Brain();
                
                Brain &operator=( Brain const &value );
                void setIdeas(std::string content, int i);
                std::string getIdeas(int i) const;
};

#endif