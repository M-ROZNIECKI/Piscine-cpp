/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:14:37 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/01 15:08:01 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {

	protected:
		std::string type;

	public:
		AMateria();
		AMateria(const std::string& type);
		AMateria(const AMateria&);
		virtual ~AMateria();

		AMateria	&operator=(const AMateria&);

		const std::string& getType() const;

		virtual AMateria*	clone() const = 0;
		virtual void	use(ICharacter& target);
};

#endif //AMATERIA_HPP
