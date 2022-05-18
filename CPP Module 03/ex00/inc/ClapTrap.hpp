/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:03:38 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/17 15:01:09 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_H
# define CLAPTRAP_CLASS_H

# include <string>

class	ClapTrap {
private:
	std::string		_name;
	unsigned int	_hit_points;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &src);
	~ClapTrap(void);
	ClapTrap		&operator =(const ClapTrap &src);

	std::string		getName(void) const;
	unsigned int	getHit_points(void) const;
	unsigned int	getEnergy_points(void) const;
	unsigned int	getAttack_points(void) const;

	void			attack(const std::string &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};

#endif
