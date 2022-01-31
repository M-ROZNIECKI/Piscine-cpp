/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:27:44 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/28 22:27:44 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal {

protected:
	std::string	type;

public:
	WrongAnimal();
	WrongAnimal(const std::string& type);
	WrongAnimal(const WrongAnimal&);
	~WrongAnimal();

	WrongAnimal	&operator=(const WrongAnimal&);

	std::string	getType() const;

	void	makeSound() const;

};


#endif //WRONGANIMAL_HPP
