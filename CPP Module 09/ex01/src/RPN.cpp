#include "RPN.hpp"

RPN::RPN(void)
{

}

RPN::RPN(const RPN &src)
{
	*this = src;
}

RPN::~RPN(void)
{

}

RPN &RPN::operator= (const RPN &src)
{
	(void) src;
	return *this;
}

float RPN::result(const std::string expr)
{
	std::list<float> elems;

	bool is_space = false;
	for (std::string::const_iterator it = expr.begin(); it != expr.end(); it++)
	{
		// If it's not a space, and the previous char is also not a space
		if (*it != ' ' && !is_space && elems.size() != 0)
			throw RPN::BadExpressionException();
		is_space = *it == ' ';

		if (*it == ' ')
			continue;

		// std::cout << *it << "  =>  ";
		if (isdigit(*it))
		{
			elems.push_back(*it - '0');
			// for (std::list<float>::const_iterator it2 = elems.begin(); it2 != elems.end(); it2++)
			// 	std::cout << *it2 << " ";
		}
		else
		{
			if (elems.size() < 2)
				throw RPN::BadExpressionException();

			float l1 = elems.back();
			elems.pop_back();
			float l2 = elems.back();
			elems.pop_back();

			switch (*it)
			{
			case '+':
				elems.push_back(l2 + l1);
				break;
			case '-':
				elems.push_back(l2 - l1);
				break;
			case '/':
				elems.push_back(l2 / l1);
				break;
			case '*':
				elems.push_back(l2 * l1);
				break;
			default:
				throw RPN::BadExpressionException();
				break;
			}

			// for (std::list<float>::const_iterator it2 = elems.begin(); it2 != elems.end(); it2++)
			// 	std::cout << *it2 << " ";
		}

		// std::cout << std::endl;
	}

	// Return the sum of last elements
	float result = 0;
	for (std::list<float>::const_iterator it = elems.begin(); it != elems.end(); it++)
		result += *it;
	return result;
}

const char*	RPN::BadExpressionException::what(void) const throw()
{
	return ("Error");
}
