/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:40:14 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/09 13:44:35 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Zombie {
private:
	std::string	name;

public:
	Zombie(std::string name);
	~Zombie(void);

	void	announce(void);
};
