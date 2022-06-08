/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:08:17 by ocartier          #+#    #+#             */
/*   Updated: 2022/06/08 18:44:42 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_CLASS_HPP
#define ICHARACTER_CLASS_HPP

# include <iostream>
# include <iomanip>
# include "AMateria.hpp"

class AMateria;

class ICharacter
{
public:
	virtual 		~ICharacter(){};
	virtual const	std::string &getName() const = 0;
	virtual void	equip(AMateria *m) = 0;
	virtual void	unequip(int idx) = 0;
	virtual void	use(int idx, ICharacter &target) = 0;
};

#endif
