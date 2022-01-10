/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:07:45 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/10 19:55:50 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
# include <string>
# include <iostream>

class Karen {

	private:
		void		debug();
		void		info();
		void		warning();
		void		error();

	public:
		Karen();
		void	complain(std::string level);

};

#endif //KAREN_HPP
