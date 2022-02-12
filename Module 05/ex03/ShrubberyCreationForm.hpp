/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 22:59:29 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/04 14:51:14 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include <stdexcept>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form {

	private:
		std::string target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& istarget);
		ShrubberyCreationForm(const ShrubberyCreationForm&);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm&);

		const std::string&	getTarget() const;

		void	execute(Bureaucrat const & executor) const;

		class NoSignatureExcept : public std::logic_error {
		public:
			NoSignatureExcept();
		};
};

std::ostream&	operator<<(std::ostream& os, const ShrubberyCreationForm& a);

#endif //SHRUBBERYCREATIONFORM_HPP
