/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:00:31 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/04 15:47:04 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include <stdexcept>
# include <cstdlib>
# include <ctime>
# include "Form.hpp"

class RobotomyRequestForm : public Form {

private:
	std::string target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string& istarget);
	RobotomyRequestForm(const RobotomyRequestForm&);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm	&operator=(const RobotomyRequestForm&);

	const std::string&	getTarget() const;

	void	beSigned(Bureaucrat&);
	void	execute(Bureaucrat const & executor) const;

	class NoSignatureExcept : public std::logic_error {
	public:
		NoSignatureExcept();
	};
};

#endif //ROBOTOMYREQUESTFORM_HPP
