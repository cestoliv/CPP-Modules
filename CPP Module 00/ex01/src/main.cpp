/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 08:39:56 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/07 11:05:18 by ocartier         ###   ########.fr       */
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

int	main(void)
{
	PhoneBook	phonebook;
	bool		run;

	run = true;
	std::cout << "Welcome to your phonebook. You type ADD to add a contact, SEARCH to find a contact or EXIT." << std::endl;
	while (run)
	{
		std::string query = "";
		std::cout << "$> ";
		std::getline(std::cin, query);

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
				std::cout << "\tIndex of the contact to display: ";
				std::getline(std::cin, index);
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
