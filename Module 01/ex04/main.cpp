/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:48:15 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/09 21:37:53 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	if (argc == 4) {
		std::string		s1 = argv[2];
		std::string		s2 = argv[3];
		std::string		res;
		size_t 			pos = 0;
		std::ifstream	my_file(argv[1]);
		std::string		temp((std::istreambuf_iterator<char>(my_file)), std::istreambuf_iterator<char>());
		std::ofstream	out_file;

		for (size_t n = temp.find(s1, 0); n != std::string::npos ; n = temp.find(s1, n)) {
			res.append(temp, pos, n - pos);
			res.append(s2);
			pos = n + s1.size();
			n++;
		}
		res.append(temp.begin() + pos, temp.end());
		temp = argv[1];
		temp.append(".replace");
		out_file.open(temp.c_str());
		out_file << res;
		out_file.close();
	}
	return 0;
}
