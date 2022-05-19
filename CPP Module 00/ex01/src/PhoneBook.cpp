/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 08:38:19 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/19 09:31:57 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook-app.hpp"

#define MAX_CONTACTS 8

PhoneBook::PhoneBook(void)
{
	this->_size = 0;
	this->_contacts = new Contact[MAX_CONTACTS];
	return;
}

PhoneBook::~PhoneBook(void)
{
	delete[] this->_contacts;
	return;
}

int	PhoneBook::get_size()
{
	return this->_size;
}

void	PhoneBook::add_contact()
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	getinput(first_name, "\tFirst Name\t[]: ");
	getinput(last_name, "\tLast Name\t[]: ");
	getinput(nickname, "\tNickname\t[]: ");
	getinput(phone_number, "\tPhone\t\t[]: ");
	getinput(darkest_secret, "\tDarkest Secret\t[]: ");

	if (this->_size >= MAX_CONTACTS)
	{
		this->_size--;
		for (int cur = 0; cur < this->_size; cur++)
		{
			this->_contacts[cur].set_infos(
				this->_contacts[cur + 1].get_first_name(),
				this->_contacts[cur + 1].get_last_name(),
				this->_contacts[cur + 1].get_nickname(),
				this->_contacts[cur + 1].get_phone_number(),
				this->_contacts[cur + 1].get_darkest_secret()
			);
		}
	}
	this->_contacts[this->_size].set_infos(first_name, last_name, nickname, phone_number, darkest_secret);
	if (this->_size < MAX_CONTACTS)
		this->_size++;
}

void	PhoneBook::list_contacts(void)
{
	std::cout << "\t---INDEX----FIRST NAME--LAST_NAME--NICKNAME--" << std::endl;
	for (int cur = 0; cur < this->_size; cur++)
	{
		std::cout << "\t|" << std::setw(10) << cur;
		std::cout << "|" << std::setw(10) << this->_contacts[cur].get_first_name(10);
		std::cout << "|" << std::setw(10) << this->_contacts[cur].get_last_name(10);
		std::cout << "|" << std::setw(10) << this->_contacts[cur].get_nickname(10);
		std::cout << "|" << std::endl;
	}
	std::cout << "\t---------------------------------------------" << std::endl;
}

void	PhoneBook::display_contact(int index)
{
	if (index < this->_size && index >= 0)
		this->_contacts[index].show_info();
	else
		std::cout << "\tIndex must be between 0 and " << this->_size - 1 << std::endl;
}
