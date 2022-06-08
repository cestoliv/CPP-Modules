/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:03:30 by ocartier          #+#    #+#             */
/*   Updated: 2022/06/08 18:37:58 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
#define CHARACTER_CLASS_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class AMateria;

class Character: public ICharacter
{
protected:
	static const int	_inventorySize = 4;
	AMateria 			*_inventory[_inventorySize];
	std::string			_name;

public:
	Character(void);
	Character(const std::string &name);
	Character(const Character &src);
	Character			&operator =(const Character &src);

	virtual				~Character();

	const std::string	&getName() const;
	void				equip(AMateria *m);
	void				unequip(int idx);
	void				use(int idx, ICharacter &target);
};

#endif
