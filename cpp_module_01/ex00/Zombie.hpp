#if !defined(ZOMBIE_HPP)
#define ZOMBIE_HPP

//includes
# include <iostream>

class Zombie
{
private:
    std::string name;
public:
    ~Zombie();
    void    announce( void );
    Zombie* newZombie( std::string name );
    void    randomChump( std::string name );
};

#endif // ZOMBIE_HPP
