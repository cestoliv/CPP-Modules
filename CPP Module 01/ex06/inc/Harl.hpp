/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:08:12 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/19 09:47:16 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_H
# define HARL_CLASS_H

# include <string>

class Harl {
private:
	int		filter_level;
	bool	insignificant_printed;

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:
	Harl(void);

	void	setFilter_level(std::string filter_level);
	void	complain(std::string level);
};

#endif
