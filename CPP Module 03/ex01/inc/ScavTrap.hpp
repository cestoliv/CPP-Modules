/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:13:59 by ocartier          #+#    #+#             */
/*   Updated: 2022/06/14 12:35:15 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H

# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:
	bool	_guard_mode;
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &src);
	virtual ~ScavTrap(void);
	ScavTrap	&operator =(const ScavTrap &src);

	bool		getGuard_mode(void) const;
	void		guardGate(void);
	void		attack(const std::string &target);
};

#endif
