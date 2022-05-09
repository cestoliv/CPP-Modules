/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:44:55 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/09 15:03:33 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Weapon.hpp"

class HumanA {
private:
	std::string	name;
	Weapon&		weapon;

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);

	void	attack(void);
};
