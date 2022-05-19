/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 08:55:33 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/19 09:49:24 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

class Fixed {
private:
	int					_fp;
	static const int	_frac = 8;
public:
	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed(void);

	Fixed	&operator=(Fixed const &src);

	int		getRawBits(void) const;
	void	setRawBits(const int raw);
};

#endif
