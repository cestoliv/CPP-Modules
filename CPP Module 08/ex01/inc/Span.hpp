/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 10:22:02 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/28 10:56:17 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_H
# define SPAN_CLASS_H

# include <vector>
# include <algorithm>

class Span {
private:
	const unsigned int	_max_size;
	std::vector<int>	_elems;

public:
	Span(void);
	Span(const unsigned int max_size);
	Span(const Span &src);
	~Span(void);
	Span	&operator =(const Span &src);

	void	addNumber(const int num);
	int		shortestSpan(void) const;
	int		longestSpan(void) const;

	class MaxSizeReachedException: public std::exception {
	public:
		virtual const char* what(void) const throw();
	};

	class EmptySpanException: public std::exception {
	public:
		virtual const char* what(void) const throw();
	};
};

#endif
