/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:03:29 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/24 15:48:13 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>
#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{

}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern::~Intern(void)
{

}

Intern	&Intern::operator =(const Intern &src)
{
	(void)src;
	return *this;
}

static AForm	*createShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm	*createRobotomy(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm	*createPresident(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	AForm				*createdForm = NULL;
	const std::string	formsNames[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm	*(*formsFun[])(std::string target) = {&createShrubbery, &createRobotomy, &createPresident};

	std::transform(name.begin(), name.end(), name.begin(), ::tolower); // name to lower
	for (size_t cur = 0; cur < (sizeof(formsNames) / sizeof(formsNames[0])); cur++)
	{
		if (name == formsNames[cur])
		{
			createdForm = formsFun[cur](target);
			break;
		}
	}
	if (!createdForm)
		std::cout << "There is no form with the name \"" << name << "\", but I can do the following forms : \"shrubbery creation\", \"robotomy creation\", \"presidential pardon\"." << std::endl; 
	return createdForm;
}
