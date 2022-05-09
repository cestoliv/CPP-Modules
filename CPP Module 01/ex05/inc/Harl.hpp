/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:08:12 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/09 17:09:34 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <string>

class Harl {
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:
	void	complain(std::string level);
};
