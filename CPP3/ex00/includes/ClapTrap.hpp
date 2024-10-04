#ifndef __ClapTrap__
#define _ClapTrap__

#include <iostream>

class ClapTrap
{   
    public:
    
        ClapTrap();
        ClapTrap( ClapTrap &copy );
        ClapTrap( std::string name );
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

    private:
        std::string _name;
        int _hitPoint;
        int _energyPoint;
        int _attackDmg;
        
};




#endif