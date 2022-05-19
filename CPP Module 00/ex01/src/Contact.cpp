/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 08:35:08 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/19 09:30:41 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook-app.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::set_infos(std::string first_name, std::string last_name,
	std::string nickname, std::string phone_number, std::string darkest_secret)
{
	this->_first_name = first_name;
	this->_last_name = last_name;
	this->_nickname = nickname;
	this->_phone_number = phone_number;
	this->_darkest_secret = darkest_secret;
}

std::string	Contact::get_first_name(long unsigned int size)
{
	if (size > 0 && this->_first_name.length() > size)
	{
		std::string firstname;
		firstname = this->_first_name.substr(0, size - 1);
		firstname.push_back('.');
		return firstname;
	}
	return this->_first_name;
}

std::string	Contact::get_last_name(long unsigned int size)
{

	if (size > 0 && this->_last_name.length() > size)
	{
		std::string lastname;
		lastname = this->_last_name.substr(0, size - 1);
		lastname.push_back('.');
		return lastname;
	}
	return this->_last_name;
}

std::string	Contact::get_nickname(long unsigned int size)
{
	if (size > 0 && this->_nickname.length() > size)
	{
		std::string nickname;
		nickname = this->_nickname.substr(0, size - 1);
		nickname.push_back('.');
		return nickname;
	}
	return this->_nickname;
}

std::string	Contact::get_phone_number(void)
{
	return this->_phone_number;
}

std::string	Contact::get_darkest_secret(void)
{
	return this->_darkest_secret;
}

void	Contact::show_info(void)
{
	std::cout << "\tFirst Name:\t" << this->_first_name << std::endl;
	std::cout << "\tLast Name:\t" << this->_last_name << std::endl;
	std::cout << "\tNickname:\t" << this->_nickname << std::endl;
	std::cout << "\tPhone:\t\t" << this->_phone_number << std::endl;
	std::cout << "\tDarkest Secret:\t" << this->_darkest_secret << std::endl;
}
