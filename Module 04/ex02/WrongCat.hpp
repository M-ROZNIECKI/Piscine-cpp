/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:30:43 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/30 16:30:43 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
	WrongCat();
	WrongCat(const WrongCat&);
	~WrongCat();

	WrongCat	&operator=(const WrongCat&);

	void	makeSound() const;

};


#endif //WRONGCAT_HPP
