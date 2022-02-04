/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:41:10 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/02 22:27:11 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat {

	private:
		const std::string	name;
		unsigned int	grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string& myName, unsigned int myGrade = 150);
		Bureaucrat(const Bureaucrat&);
		~Bureaucrat();

		Bureaucrat	&operator=(const Bureaucrat&);

		const std::string&	getName() const;
		unsigned int		getGrade() const;

		class GradeTooHighExcept : public std::logic_error {
			public:
				GradeTooHighExcept();
		};
		class GradeTooLowExcept : public std::logic_error {
			public:
				GradeTooLowExcept();
		};

		void	incGrade();
		void	decGrade();
		void	signForm(Form &);
		void	executeForm(Form const & form);

};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& a);

#endif //BUREAUCRAT_HPP
