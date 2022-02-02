/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:14:48 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/01 17:18:04 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
# include "AMateria.hpp"
# include <iostream>

class Cure : public AMateria {

public:
	Cure();
	Cure(const Cure&);
	virtual ~Cure();

	Cure	&operator=(const Cure&);

	Cure*	clone() const;
	void	use(ICharacter& target);

};

#endif //CURE_HPP
