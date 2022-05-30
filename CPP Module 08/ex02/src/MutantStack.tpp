/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:35:21 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/28 15:41:48 by ocartier         ###   ########.fr       */
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
