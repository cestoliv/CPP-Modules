/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:08:12 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/19 10:16:59 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_H
# define HARL_CLASS_H

# include <string>

class Harl {
private:
	int		_filter_level;
	bool	_insignificant_printed;

	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);

public:
	Harl(void);

	void	setFilter_level(std::string filter_level);
	void	complain(std::string level);
};

#endif
