/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:26:33 by ocartier          #+#    #+#             */
/*   Updated: 2022/06/08 18:44:30 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
	: AMateria("ice")
{}

Ice::Ice(const Ice &src)
	: AMateria(src)
{}

Ice::~Ice()
{}

Ice	&Ice::operator =(const Ice &src)
{
	(void) src;
	return (*this);
}

Ice	*Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << " * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
