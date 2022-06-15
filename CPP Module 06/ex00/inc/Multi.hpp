/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Multi.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:44:33 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/26 14:16:58 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MULTI_CLASS_H
# define MULTI_CLASS_H

# include <string>
# include <iostream>

class Multi {
private:
	char	_char_val;
	int		_int_val;
	float	_float_val;
	double	_double_val;

	bool	_char_impossible;
	bool	_int_impossible;
	bool	_float_impossible;
	bool	_double_impossible;

	void	_convert(const char *str_val);
	bool	_check_string(const char *str_val);
	bool	_set_inf_nan(const char *str_val);

public:
	Multi(void);
	Multi(const char* str_val);
	Multi(const std::string str_val);
	Multi(const Multi &src);
	~Multi(void);
	Multi	&operator =(const Multi &src);

	operator	char() const;
	operator	int() const;
	operator	float() const;
	operator	double() const;

	bool		isCharImpossible(void) const;
	bool		isIntImpossible(void) const;
	bool		isFloatImpossible(void) const;
	bool		isDoubleImpossible(void) const;
};

std::ostream	&operator <<(std::ostream &o, const Multi &mul);

#endif
