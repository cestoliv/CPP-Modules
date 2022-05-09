/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:09:39 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/09 17:54:31 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

Harl::Harl()
{
	this->filter_level = 0;
	this->insignificant_printed = false;
}

void	Harl::setFilter_level(std::string filter_level)
{
	if (filter_level == "DEBUG")
		this->filter_level = 1;
	else if (filter_level == "INFO")
		this->filter_level = 2;
	else if (filter_level == "WARNING")
		this->filter_level = 3;
	else if (filter_level == "ERROR")
		this->filter_level = 4;
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	return;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
	return;
}

void	Harl::error(void)
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

	if (this->filter_level == 0)
	{
		if (!this->insignificant_printed)
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		this->insignificant_printed = true;
	}
	else
	{
		for (int cur = 0; cur < 4; cur++)
		{
			if (level == complaintLevels[cur] && cur >= this->filter_level - 1)
			{
				switch (cur)
				{
				case 0:
					this->debug();
					break;
				case 1:
					this->info();
					break;
				case 2:
					this->warning();
					break;
				case 3:
					this->error();
					break;
				}
				break;
			}
		}
	}
	return;
}
