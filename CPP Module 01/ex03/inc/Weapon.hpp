/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:37:35 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/19 09:45:26 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

# include <string>

class Weapon {
private:
	std::string	type;

public:
	Weapon(std::string type);
	~Weapon(void);

	std::string	getType();
	void		setType(std::string type);
};

#endif
