/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:13:19 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/02 14:52:26 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include <iostream>

class MateriaSource : public IMateriaSource{

	private:
		AMateria*	inventory[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource&);
		virtual ~MateriaSource();

		MateriaSource	&operator=(const MateriaSource&);

		const AMateria*const* getMateria() const;

		void	learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);

};

#endif //MATERIASOURCE_HPP
