/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 09:31:05 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/28 10:10:06 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_H
# define ARRAY_CLASS_H

# include <iostream>

template<typename T>
class Array {
private:
	const unsigned int	_size;
	T					*_array;

public:
	Array<T>(void);
	Array<T>(unsigned int size);
	Array<T>(const Array<T> &src);
	~Array<T>(void);
	Array<T>		&operator =(const Array<T> &src);

	T				&operator [](const int index) const;
	unsigned int	size(void) const;

	class out_of_range: public std::exception {
	public:
		virtual const char* what(void) const throw();
	};
};

# include "../src/Array.tpp"

#endif
