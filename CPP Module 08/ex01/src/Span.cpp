/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 10:29:28 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/28 11:35:40 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <numeric>
#include "Span.hpp"

Span::Span(void)
	: _max_size(0)
{

}

Span::Span(const unsigned int max_size)
	: _max_size(max_size)
{

}

Span::Span(const Span &src)
	: _max_size(src._max_size)
{
	*this = src;
}

Span::~Span(void)
{

}

Span	&Span::operator =(const Span &src)
{
	if (this != &src)
		this->_elems = src._elems;
	return *this;
}

void	Span::addNumber(const int num)
{
	if (this->_elems.size() >= this->_max_size ||
		this->_elems.size() >= this->_elems.max_size())
		throw Span::MaxSizeReachedException();
	this->_elems.push_back(num);
}

int	Span::shortestSpan(void) const
{
	if (this->_elems.size() == 0)
		throw Span::EmptySpanException();

	std::vector<int> temp = this->_elems;
	std::sort(temp.begin(), temp.end());
	std::adjacent_difference(temp.begin(), temp.end(), temp.begin());

	return *std::min_element(temp.begin(), temp.end());
}

int	Span::longestSpan(void) const
{
	if (this->_elems.size() == 0)
		throw Span::EmptySpanException();

	int	max = *std::max_element(this->_elems.begin(), this->_elems.end());
	int	min = *std::min_element(this->_elems.begin(), this->_elems.end());

	return max - min;
}

const char*	Span::MaxSizeReachedException::what(void) const throw()
{
	return "Maximum size for Span reached!";
}

const char*	Span::EmptySpanException::what(void) const throw()
{
	return "Span is empty!";
}
