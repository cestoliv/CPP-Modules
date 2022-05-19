/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:09:39 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/19 10:21:36 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

Harl::Harl()
{
	this->_filter_level = 0;
	this->_insignificant_printed = false;
}

void	Harl::setFilter_level(std::string filter_level)
{
	if (filter_level == "DEBUG")
		this->_filter_level = 1;
	else if (filter_level == "INFO")
		this->_filter_level = 2;
	else if (filter_level == "WARNING")
		this->_filter_level = 3;
	else if (filter_level == "ERROR")
		this->_filter_level = 4;
}

void	Harl::_debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	return;
}

void	Harl::_info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return;
}

void	Harl::_warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
	return;
}

void	Harl::_error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
	return;
}

void	Harl::complain(std::string level)
{
	std::string	complaintLevels[] = {
		"debug",
		"info",
		"warning",
		"error"
	};

	if (this->_filter_level == 0)
	{
		if (!this->_insignificant_printed)
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		this->_insignificant_printed = true;
	}
	else
	{
		for (int cur = 0; cur < 4; cur++)
		{
			if (level == complaintLevels[cur] && cur >= this->_filter_level - 1)
			{
				switch (cur)
				{
				case 0:
					this->_debug();
					break;
				case 1:
					this->_info();
					break;
				case 2:
					this->_warning();
					break;
				case 3:
					this->_error();
					break;
				}
				break;
			}
		}
	}
	return;
}
