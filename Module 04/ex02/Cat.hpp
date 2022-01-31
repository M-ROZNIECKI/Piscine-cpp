/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:28:08 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/31 14:17:54 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

private:
	Brain* brain;

public:
		Cat();
		Cat(const Cat&);
		virtual ~Cat();

		Cat	&operator=(const Cat&);

		Brain	getBrain() const;
		void	setBrain(const Brain&);

		void	makeSound() const;

};


#endif //CAT_HPP
