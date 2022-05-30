/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:51:43 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/30 15:56:49 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

std::string	replaceNl(std::string str)
{
	std::string search = "\\n";
	std::string replaced = "";

	for (size_t cur = 0; cur < str.length(); cur++)
	{
		if (str.substr(cur).find(search) == 0)
		{
			cur += search.length() - 1;
			replaced += "\n";
		}
		else
			replaced += str[cur];
	}
	return replaced;
}

int	main(int argc, char* argv[])
{
	// CHECK ARGS
	if (argc < 4)
	{
		std::cout << "Usage : ./replace <filename> <search> <replacement>" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string search = argv[2];
	search = replaceNl(search);
	std::string replacement = argv[3];
	replacement = replaceNl(replacement);

	// OPEN FILESTREAM
	std::ifstream	infile;
	infile.open(filename.c_str());
	if (infile.fail())
	{
		std::cout << "Can't read file " << filename << std::endl;
		return 1;
	}

	std::ofstream	outfile;
	outfile.open((filename + ".replace").c_str());
	if (outfile.fail())
	{
		std::cout << "Can't write to file " << filename + ".replace"<< std::endl;
		return 1;
	}

	// RETRIEVE INFILE CONTENT
	std::stringstream	filecStream;
	filecStream << infile.rdbuf();
	std::string	filec = filecStream.str();

	// REPLACE IN STRING
	if (search.empty())
	{
		outfile << filec;
		return 0;
	}
	for (size_t cur = 0; cur < filec.length(); cur++)
	{
		if (filec.substr(cur).find(search) == 0)
		{
			cur += search.length() - 1;
			outfile << replacement;
		}
		else
			outfile << filec[cur];
	}

	return 0;
}
