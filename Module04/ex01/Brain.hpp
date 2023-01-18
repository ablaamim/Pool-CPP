#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define THOUGHT "I think about what I think"
# define CAT_THOUGHT "Meow Meow Meow"
# define DOG_THOUGHT "Woof Woof Woof"

class Brain
{
    protected :
        std::string ideas[100];
    public :
        Brain();
        Brain(Brain const &old);
        virtual ~Brain();
        Brain(std::string type);

        Brain& operator= (const Brain &other);
        const std::string getIdea() const;
        void setIdea(std::string const idea);
};

#endif