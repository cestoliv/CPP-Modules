/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:50:20 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/09 15:04:48 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
private:
	std::string	name;
	Weapon*		weapon;

public:
	HumanB(std::string name);
	~HumanB(void);

	void	setWeapon(Weapon& weapon);
	void	attack(void);
};
