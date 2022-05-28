/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 10:29:28 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/28 11:05:50 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return *std::min_element(this->_elems.begin(), this->_elems.end());
}

int	Span::longestSpan(void) const
{
	if (this->_elems.size() == 0)
		throw Span::EmptySpanException();
	return *std::max_element(this->_elems.begin(), this->_elems.end());
}

const char*	Span::MaxSizeReachedException::what(void) const throw()
{
	return "Maximum size for Span reached!";
}

const char*	Span::EmptySpanException::what(void) const throw()
{
	return "Span is empty!";
}
