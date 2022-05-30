/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:24:26 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/30 17:47:35 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS_H
# define MUTANTSTACK_CLASS_H

# include <stack>

template<typename T>
class MutantStack: public std::stack<T> {
public:
	MutantStack<T>(void);
	MutantStack<T>(const MutantStack<T> &src);
	~MutantStack<T>(void);
	MutantStack<T>	&operator =(const MutantStack<T> &src);

	typedef typename std::stack<T>::container_type::iterator		iterator;
	typedef typename std::stack<T>::container_type::const_iterator	const_iterator;

	iterator		begin(void);
	const_iterator	begin(void) const;
	iterator		end(void);
	const_iterator	end(void) const;
};

# include "../src/MutantStack.tpp"

#endif
