//
// Created by fenrir on 25/01/2022.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {

	private:
		std::string		Name;
		unsigned int	HitPoints;
		unsigned int	EnergyPoints;
		unsigned int	AttackDamage;

	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap&);
		~ClapTrap();

		ClapTrap	&operator=(const ClapTrap&);

		std::string		getName() const;
		unsigned int	getHp() const;
		unsigned int	getEp() const;
		unsigned int	getDmg() const;

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};


#endif //CLAPTRAP_HPP
