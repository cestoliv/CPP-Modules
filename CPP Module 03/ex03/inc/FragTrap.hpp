/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 21:39:10 by ocartier          #+#    #+#             */
/*   Updated: 2022/06/14 12:35:48 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H

# include <string>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &src);
	virtual ~FragTrap(void);
	FragTrap	&operator =(const FragTrap &src);

	void	highFivesGuys(void);
};

#endif
