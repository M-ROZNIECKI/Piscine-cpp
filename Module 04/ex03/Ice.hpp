/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:41:48 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/01 16:24:07 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
# include "AMateria.hpp"
# include <iostream>

class Ice : public AMateria {

	public:
		Ice();
		Ice(const Ice&);
		virtual ~Ice();

		Ice	&operator=(const Ice&);

		Ice*	clone() const;
		void	use(ICharacter& target);

};

#endif //ICE_HPP
