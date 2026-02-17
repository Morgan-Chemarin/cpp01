/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:48:01 by dev               #+#    #+#             */
/*   Updated: 2026/02/17 17:46:47 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

static void replaceAll(std::string &text, std::string s1, std::string s2)
{
    std::size_t pos = 0;
    while ((pos = text.find(s1, pos)) != std::string::npos)
    {
        text.erase(pos, s1.size());
        text.insert(pos, s2);
        pos += s2.size();
    }
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "./replace <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1.empty())
	{
		std::cout << "s1 can't be empty" << std::endl;
		return 1;
	}

	std::ifstream ifs(filename.c_str());
	if (!ifs)
	{
		std::cout << "can't open input file" << std::endl;
		return 1;
	}

	std::string outputFile = filename + ".replace";
	std::ofstream ofs(outputFile.c_str());
	if (!ofs)
	{
		std::cout << "can't create output file" << std::endl;
		return 1;
	}
	
	std::ostringstream oss;
    oss << ifs.rdbuf();
    std::string content = oss.str();

    replaceAll(content, s1, s2);
    ofs << content;

	return 0;
}