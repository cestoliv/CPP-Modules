/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:40:14 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/19 09:45:39 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

# include <string>

class Zombie {
private:
	std::string	_name;

public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	void	announce(void);
	void	set_name(std::string name);
};

#endif
