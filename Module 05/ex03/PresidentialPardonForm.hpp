/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:02:17 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/02 23:02:17 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class PresidentialPardonForm : public Form {

private:
	std::string target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string& istarget);
	PresidentialPardonForm(const PresidentialPardonForm&);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm	&operator=(const PresidentialPardonForm&);

	const std::string&	getTarget() const;

	void	execute(Bureaucrat const & executor) const;

	class NoSignatureExcept : public std::logic_error {
	public:
		NoSignatureExcept();
	};
};

std::ostream&	operator<<(std::ostream& os, const PresidentialPardonForm& a);

#endif //PRESIDENTIALPARDONFORM_HPP
