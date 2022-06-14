/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:53:16 by ocartier          #+#    #+#             */
/*   Updated: 2022/06/14 12:39:49 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int rand = 1 + std::rand()/((RAND_MAX + 1u)/3); // [1; 3]
	if (rand == 1)
	{
		std::cout << "Generate an A." << std::endl;
		return new A();
	}
	else if (rand == 2)
	{
		std::cout << "Generate a  B." << std::endl;
		return new B();
	}
	else
	{
		std::cout << "Generate a  C." << std::endl;
		return new C();
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "  (identify Base*) Confirmed as an A." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "  (identify Base*) Confirmed as a  B." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "  (identify Base*) Confirmed as a  C." << std::endl;
	else
		std::cout << "  (identify Base*) Can't identify this Base*..." << std::endl;
}

void	identify(Base& p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "  (identify Base&) Confirmed as an A." << std::endl;
		return;
	}
	catch (std::exception &e) { (void)e; }

	try
	{
		dynamic_cast<B&>(p);
		std::cout << "  (identify Base&) Confirmed as a  B." << std::endl;
		return;
	}
	catch (std::exception &e) { (void)e; }

	try
	{
		dynamic_cast<C&>(p);
		std::cout << "  (identify Base&) Confirmed as a  C." << std::endl;
		return;
	}
	catch (std::exception &e) { (void)e; }

	std::cout << "  (identify Base&) Can't identify this Base&..." << std::endl;
}

int	main(void)
{
	std::srand(std::time(0));
	for (int cur = 0; cur < 5; cur++)
	{
		Base *randBase = generate();
		identify(randBase);
		identify(*randBase);
		delete randBase;
	}
	return 0;
}
