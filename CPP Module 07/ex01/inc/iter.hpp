/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 22:15:40 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/26 22:25:51 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

template<typename T>
void	iter(T *arr, const size_t len, void fun(T &el))
{
	for (size_t cur = 0; cur < len; cur++)
		fun(arr[cur]);
}

#endif
