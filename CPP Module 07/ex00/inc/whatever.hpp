/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 22:06:20 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/26 22:09:50 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
void	swap(T &a, T&b)
{
	T	temp = a;
	a = b;
	b = temp;
}

template<typename T>
T	max(const T &a, const T &b)
{
	return (a>b ? a : b);
}

template<typename T>
T	min(const T &a, const T &b)
{
	return (a<b ? a : b);
}
