/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:46:46 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/04 16:40:27 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
# include <iostream>
# include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:
	const std::string name;
	bool	signature;
	const unsigned int	signGrade;
	const unsigned int	execGrade;

protected:
	void				setSignature(bool);

public:
	Form();
	Form(const std::string& docName, const unsigned int signLvl, const unsigned int execLvl);
	Form(const Form&);
	virtual ~Form();

	Form	&operator=(const Form&);

	const std::string&	getName() const;
	const bool&			getSignature() const;
	const unsigned int&	getSignGrade() const;
	const unsigned int&	getExecGrade() const;

	static void		checkLvl(unsigned int, const Bureaucrat&);
	virtual void	beSigned(Bureaucrat&) = 0;
	virtual void	execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighExcept : public std::logic_error {
	public:
		GradeTooHighExcept();
	};
	class GradeTooLowExcept : public std::logic_error {
	public:
		GradeTooLowExcept();
	};

};

std::ostream&	operator<<(std::ostream& os, const Form& a);

#endif //FORM_HPP
