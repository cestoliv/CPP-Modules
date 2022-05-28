/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:26:24 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/28 09:41:34 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<class T>
Array<T>::Array(void): _size(0)
{
	this->_array = NULL;
}

template<class T>
Array<T>::Array(unsigned int size): _size(size)
{
	this->_array = new T[this->_size];
}

template<class T>
Array<T>::Array(const Array<T> &src): _size(src._size)
{
	*this = src;
}

template<class T>
Array<T>::~Array(void)
{
	if (this->_size > 0)
		delete [] this->_array;
}

template<class T>
Array<T>	&Array<T>::operator =(const Array<T> &src)
{
	if (this != &src)
	{
		//this->_array = src._array; // bad deep copy
		this->_array = new T[this->_size];
	}
	return *this;
}

template<class T>
T	&Array<T>::operator [](const int index) const
{
	if (index < 0 || static_cast<unsigned int>(index) >= this->_size)
		throw Array::out_of_range();
	return this->_array[index];
}

template<class T>
unsigned int	Array<T>::size(void) const
{
	return this->_size;
}

template<class T>	
const char* Array<T>::out_of_range::what(void) const throw()
{
	return ("Index out of range!");
}
