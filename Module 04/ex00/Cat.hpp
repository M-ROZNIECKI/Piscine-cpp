/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:28:08 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/30 15:28:08 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal {

	public:
		Cat();
		Cat(const Cat&);
		~Cat();

		Cat	&operator=(const Cat&);

		void	makeSound() const;

};


#endif //CAT_HPP
