/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:53:16 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/24 16:01:24 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat	thiery = Bureaucrat("Thiery", 3);
	Bureaucrat	thiery_copy = thiery;
	Bureaucrat	sophie = Bureaucrat("Sophie", 150);
	Bureaucrat	lou = Bureaucrat("Lou", 20);

	Intern		claireDespagneSlave = Intern();

	AForm	*f1 = claireDespagneSlave.makeForm("shrubbery creation", "campus");
	AForm	*f2 = claireDespagneSlave.makeForm("Robotomy request", "a rat");
	AForm	*f3 = claireDespagneSlave.makeForm("presidential pardon", "Captain Sparrow");
	claireDespagneSlave.makeForm("censor", "Claire Despagne");

	thiery.executeForm(*f1);
	sophie.signForm(*f1);
	thiery.signForm(*f1);
	sophie.executeForm(*f1);
	thiery.executeForm(*f1);

	lou.signForm(*f2);
	lou.executeForm(*f2);

	lou.signForm(*f3);
	lou.executeForm(*f3);
	thiery.executeForm(*f3);

	return 0;
}
