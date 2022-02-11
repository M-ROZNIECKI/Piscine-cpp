/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:24:55 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/02 15:09:12 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter {

	private:
		const std::string	name;
		AMateria*			inventory[4];

	public:
		Character();
		Character(const std::string &Name);
		Character(const Character&);
		~Character();

		Character	&operator=(const Character&);

		const std::string&	getName() const;

	const AMateria*const* getMateria() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);

};

#endif //CHARACTER_HPP
