/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:22:29 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/30 21:40:58 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
# include <iostream>

class Brain {

	private:
		std::string ideas[100];

	public:
		Brain();
		Brain(std::string*, int sizeTab = 100);
		Brain(const Brain&);
		~Brain();

		Brain	&operator=(const Brain&);

		const std::string *getIdeas() const;
		void	setIdeas(const std::string*, int sizeTab = 100);

};

#endif //BRAIN_HPP
