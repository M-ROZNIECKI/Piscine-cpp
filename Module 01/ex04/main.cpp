/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:48:15 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/09 21:56:42 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	if (argc == 4) {
		std::ifstream	my_file(argv[1]);
		if (argv[2][0] == 0 || argv[3][0] == 0 || !my_file.is_open())
			return 1;
		std::string		s1 = argv[2];
		std::string		s2 = argv[3];
		std::string		res;
		size_t 			pos = 0;
		std::string		temp((std::istreambuf_iterator<char>(my_file)), std::istreambuf_iterator<char>());
		std::ofstream	out_file;

		for (size_t n = temp.find(s1, 0); n != std::string::npos ; n = temp.find(s1, n)) {
			res.append(temp, pos, n - pos);
			res.append(s2);
			pos = n + s1.size();
			n++;
		}
		res.append(temp.begin() + pos, temp.end());
		my_file.close();
		temp = argv[1];
		temp.append(".replace");
		out_file.open(temp.c_str());
		if (!out_file.is_open())
			return 1;
		out_file << res;
		out_file.close();
	}
	return 0;
}
