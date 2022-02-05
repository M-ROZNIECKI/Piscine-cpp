/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialisation.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:38:05 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/05 18:53:55 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALISATION_HPP
#define SERIALISATION_HPP
# include <cstdint>
# include <iostream>

struct Data {
	int i;
};

uintptr_t	serialize(Data *ptr);
Data* deserialize(uintptr_t raw);

#endif //SERIALISATION_HPP
