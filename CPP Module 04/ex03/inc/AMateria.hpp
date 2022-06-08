/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:02:11 by ocartier          #+#    #+#             */
/*   Updated: 2022/06/08 18:45:41 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
#define AMATERIA_CLASS_HPP

# include <iomanip>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria(void);
	AMateria(const AMateria &src);
	AMateria(std::string const &type);
	AMateria			&operator =(const AMateria &src);

	std::string const	&getType() const;

	virtual				~AMateria();
	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter &target);
};

#endif
