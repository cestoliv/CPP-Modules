/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 08:39:56 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/17 09:44:02 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook-app.hpp"

bool	str_isnum(std::string str)
{
	for (size_t cur = 0; cur < str.length(); cur++)
		if ((str[cur] < '0' || str[cur] > '9') && str[cur] != '-')
			return false;
	return true;
}

void	getinput(std::string &str, std::string text)
{
	str.clear();
	while (str.empty())
	{
		std::cout << text;
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(0);
		}
	}
}

int	main(void)
{
	PhoneBook	phonebook;
	bool		run;

	run = true;
	std::cout << "Welcome to your phonebook. You type ADD to add a contact, SEARCH to find a contact or EXIT." << std::endl;
	while (run)
	{
		std::string query;
		getinput(query, "$> ");

		if (!query.compare("ADD"))
			phonebook.add_contact();
		else if (!query.compare("EXIT"))
			run = false;
		else if (!query.compare("SEARCH"))
		{
			if (phonebook.get_size() > 0)
			{
				std::string	index;
				phonebook.list_contacts();
				getinput(index, "\tIndex of the contact to display: ");
				std::cout << std::endl;
				if (str_isnum(index))
					phonebook.display_contact(atoi(index.c_str()));
				else
					std::cout << "\tPlease type only numbers" << std::endl;
				std::cout << std::endl;
			}
			else
				std::cout << "\tNothing to show" << std::endl;
		}
		else if (query.length() > 0)
			std::cout << "Error : This phonebook only accepts the ADD, SEARCH or EXIT commands." << std::endl;
	}
	return (0);
}
