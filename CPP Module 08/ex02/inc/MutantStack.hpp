/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:24:26 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/28 15:40:24 by ocartier         ###   ########.fr       */
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
/*
	using peoples_t = std::vector<People>;
	using iterator = peoples_t::iterator;
	using const_iterator = peoples_t::const_iterator;


	iterator begin() { return people.begin(); }
	iterator end() { return people.end(); }
	const_iterator begin() const { return people.begin(); }
	const_iterator end() const { return people.end(); }
	const_iterator cbegin() const { return people.cbegin(); }
	const_iterator cend() const { return people.cend(); }
*/
};

# include "../src/MutantStack.tpp"

#endif
