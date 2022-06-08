/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:24:43 by ocartier          #+#    #+#             */
/*   Updated: 2022/06/08 18:42:51 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
	: AMateria("cure")
{}

Cure::Cure(const Cure &src)
	: AMateria(src)
{
	*this = src;
}

Cure::~Cure()
{}

Cure	&Cure::operator =(const Cure &src)
{
	(void) src;
	return *this;
}

Cure	*Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter &target)
{
	std::cout << " * heals " << target.getName() << "'s wounds *" << std::endl;
}
