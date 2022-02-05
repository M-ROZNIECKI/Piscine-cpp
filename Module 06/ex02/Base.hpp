/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:20:29 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/05 19:22:05 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP


class Base {

	public:
		virtual ~Base();
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif //BASE_HPP
