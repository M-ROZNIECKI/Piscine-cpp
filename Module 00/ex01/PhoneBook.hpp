/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:48:22 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/25 17:46:37 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact	directory[8];
		int		numEntry;
		void	ft_search();

	public:
		PhoneBook();
		void	cmd_add();
		void	cmd_search();
};

#endif //PHONEBOOK_HPP
