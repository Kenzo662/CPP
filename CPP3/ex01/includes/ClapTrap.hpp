#ifndef __ClapTrap__
#define _ClapTrap__

#include <iostream>
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define BLUE    "\033[34m"

class ClapTrap
{   
    public:
    
        ClapTrap();
        ClapTrap( ClapTrap &copy );
        ClapTrap( std::string name );
        ClapTrap( int hitpoint, int mana, int atkDmg );
        ClapTrap( std::string name, int hitpoint, int mana, int atkDmg );
        ~ClapTrap();
        ClapTrap & operator=(ClapTrap const &  assign);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        // Getters :

        std::string getName() const;
        int getHp() const;
        int getMana() const;
        int getAttackdmg() const;

    protected :
        std::string _name;
        unsigned int _hitPoint;
        unsigned int _energyPoint;
        unsigned int _attackDmg;
        
};




#endif