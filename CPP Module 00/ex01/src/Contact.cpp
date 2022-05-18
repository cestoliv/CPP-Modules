/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 08:35:08 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/18 14:42:25 by ocartier         ###   ########lyon.fr   */
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
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

std::string	Contact::get_first_name(long unsigned int size)
{
	if (size > 0 && this->first_name.length() > size)
	{
		std::string firstname;
		firstname = this->first_name.substr(0, size - 1);
		firstname.push_back('.');
		return firstname;
	}
	return this->first_name;
}

std::string	Contact::get_last_name(long unsigned int size)
{

	if (size > 0 && this->last_name.length() > size)
	{
		std::string lastname;
		lastname = this->last_name.substr(0, size - 1);
		lastname.push_back('.');
		return lastname;
	}
	return this->last_name;
}

std::string	Contact::get_nickname(long unsigned int size)
{
	if (size > 0 && this->nickname.length() > size)
	{
		std::string nickname;
		nickname = this->nickname.substr(0, size - 1);
		nickname.push_back('.');
		return nickname;
	}
	return this->nickname;
}

std::string	Contact::get_phone_number(void)
{
	return this->phone_number;
}

std::string	Contact::get_darkest_secret(void)
{
	return this->darkest_secret;
}

void	Contact::show_info(void)
{
	std::cout << "\tFirst Name:\t" << this->first_name << std::endl;
	std::cout << "\tLast Name:\t" << this->last_name << std::endl;
	std::cout << "\tNickname:\t" << this->nickname << std::endl;
	std::cout << "\tPhone:\t\t" << this->phone_number << std::endl;
	std::cout << "\tDarkest Secret:\t" << this->darkest_secret << std::endl;
}
