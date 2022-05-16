/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 08:55:33 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/16 10:17:34 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
