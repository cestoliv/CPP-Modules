/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:35:21 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/30 17:51:32 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

template<class T>
MutantStack<T>::MutantStack(void)
{

}

template<class T>
MutantStack<T>::MutantStack(const MutantStack<T> &src)
{
	*this = src;
}

template<class T>
MutantStack<T>::~MutantStack(void)
{

}

template<class T>
MutantStack<T>	&MutantStack<T>::operator =(const MutantStack<T> &src)
{
	if (this != &src)
		*this = src;
	return *this;
}

template<class T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return this->c.begin();
}

template<class T>
typename MutantStack<T>::const_iterator	MutantStack<T>::begin(void) const
{
	return this->c.begin();
}

template<class T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return this->c.end();
}

template<class T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end(void) const
{
	return this->c.end();
}
