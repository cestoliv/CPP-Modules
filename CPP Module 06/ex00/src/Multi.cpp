/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Multi.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:52:46 by ocartier          #+#    #+#             */
/*   Updated: 2022/06/17 15:09:14 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <cctype>
#include <cmath>
#include <string.h>
#include "Multi.hpp"

Multi::Multi(void)
{
	this->_convert("0");
}

Multi::Multi(const char* str_val)
{
	this->_convert(str_val);
}

Multi::Multi(const std::string str_val)
{
	this->_convert(str_val.c_str());
}

Multi::Multi(const Multi &src)
{
	*this = src;
}

Multi::~Multi(void)
{

}

Multi	&Multi::operator =(const Multi &src)
{
	this->_char_val = src._char_val;
	this->_int_val = src._int_val;
	this->_float_val = src._float_val;
	this->_double_val = src._double_val;
	return *this;
}

bool	Multi::_check_string(const char *str_val)
{
	bool	is_correct = true;
	bool	has_point = false;
	bool	has_digit = false;

	if (strcmp(str_val, "+inf") && strcmp(str_val, "-inf") && strcmp(str_val, "nan") &&
		strcmp(str_val, "+inff") && strcmp(str_val, "-inff") && strcmp(str_val, "nanf"))
	{
		for (int cur = 0; str_val[cur]; cur++)
		{
			if (!std::isdigit(str_val[cur]))
			{
				if ((str_val[cur] == '-' && cur != 0) ||
					(str_val[cur] == 'f' && str_val[cur + 1]) ||
					(str_val[cur] == '.' && (has_point || !std::isdigit(str_val[cur + 1])) )
				)
				{
					is_correct = false;
					break;
				}
				if (str_val[cur] == '.')
					has_point = true;
			}
			else
				has_digit = true;
		}
	}
	else
		has_digit = true; // false, just the to pass the below tests

	if (!is_correct || !has_digit)
	{
		this->_char_impossible = true;
		this->_int_impossible = true;
		this->_float_impossible = true;
		this->_double_impossible = true;
	}
	return is_correct && has_digit;
}

bool	Multi::_set_inf_nan(const char *str_val)
{
	if (!strcmp(str_val, "+inf") || !strcmp(str_val, "+inff"))
	{
		this->_char_impossible = true;
		this->_int_impossible = true;
		this->_float_val = std::numeric_limits<float>::infinity();
		this->_double_val = std::numeric_limits<double>::infinity();
		return true;
	}
	else if (!strcmp(str_val, "-inf") || !strcmp(str_val, "-inff"))
	{
		this->_char_impossible = true;
		this->_int_impossible = true;
		this->_float_val = std::numeric_limits<float>::infinity();
		this->_double_val = std::numeric_limits<double>::infinity();
		return true;
	}
	else if (!strcmp(str_val, "nan") || !strcmp(str_val, "nanf"))
	{
		this->_char_impossible = true;
		this->_int_impossible = true;
		this->_float_val = NAN;
		this->_double_val = NAN;
		return true;
	}

	return false;
}

void	Multi::_convert(const char *str_val)
{
	this->_char_impossible = false;
	this->_int_impossible = false;
	this->_float_impossible = false;
	this->_double_impossible = false;

	// From char
	if (strlen(str_val) == 1 && isalpha(str_val[0])) {
		this->_char_val = str_val[0];
		this->_int_val = str_val[0];
		this->_float_val = str_val[0];
		this->_double_val = str_val[0];
		return;
	}

	// From float
	std::string temp = str_val;
	if (str_val[strlen(str_val) - 1] == 'f')
		temp.resize(temp.size() - 1); // as pop_back is from C11

	std::stringstream ss(temp);

	if (!this->_check_string(str_val))
		return;

	if (this->_set_inf_nan(str_val))
		return;

	// convert to INT
	ss >> this->_int_val;
	if (ss.fail())
		this->_int_impossible = true;
	ss.clear(); ss.seekg(0);
	// convert to CHAR
	this->_char_val = this->_int_val;
	if (this->_int_val > static_cast<int>(std::numeric_limits<char>::max()) ||
		this->_int_val < static_cast<int>(std::numeric_limits<char>::min()))
	{
		this->_char_impossible = true;
	}
	ss.clear(); ss.seekg(0);
	// convert to FLOAT
	ss >> this->_float_val;
	if (ss.fail())
		this->_float_impossible = true;
	ss.clear(); ss.seekg(0);
	// convert to DOUBLE
	ss >> this->_double_val;
	if (ss.fail())
		this->_double_impossible = true;
}

Multi::operator char() const { return this->_char_val; }
Multi::operator int() const { return this->_int_val; }
Multi::operator float() const { return this->_float_val; }
Multi::operator double() const { return this->_double_val; }

bool	Multi::isCharImpossible(void) const { return this->_char_impossible; }
bool	Multi::isIntImpossible(void) const { return this->_int_impossible; }
bool	Multi::isFloatImpossible(void) const { return this->_float_impossible; }
bool	Multi::isDoubleImpossible(void) const { return this->_double_impossible; }

std::ostream	&operator <<(std::ostream &o, const Multi &mul)
{
	std::cout.precision(1);
	// CHAR
	o << "char: ";
	if (mul.isCharImpossible())
		o << "impossible" << std::endl;
	else if (!std::isprint(static_cast<char>(mul)))
		o << "Non displayable" << std::endl;
	else
		o << "'"<< static_cast<char>(mul) << "'" << std::endl;
	// INT
	o << "int: ";
	if (mul.isIntImpossible())
		o << "impossible" << std::endl;
	else
		o << static_cast<int>(mul) << std::endl;
	// FLOAT
	o << "float: ";
	if (mul.isFloatImpossible())
		o << "impossible" << std::endl;
	else
		o << std::fixed << static_cast<float>(mul) << "f" << std::endl;
	// DOUBLE
	o << "double: ";
	if (mul.isDoubleImpossible())
		o << "impossible";
	else
		o << static_cast<double>(mul);
	return o;
}
