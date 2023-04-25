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
	// std::list<char> elems;

	// bool is_space = false;
	// for (std::string::const_iterator it = expr.begin(); it != expr.end(); it++)
	// {
	// 	// If it's not a space, and the previous char is also not a space
	// 	if (*it != ' ' && !is_space && elems.size() != 0)
	// 		throw RPN::BadExpressionException();
	// 	is_space = *it == ' ';

	// 	// Ignore spaces (the verifiations have been done)
	// 	if (*it == ' ')
	// 		continue;

	// 	// If the character is authorized
	// 	if (!(isdigit(*it) || *it == '+' || *it == '-' || *it == '/' || *it == '*'))
	// 		throw RPN::BadExpressionException();

	// 	// If it's an operator and it doesn't follow a number
	// 	if (!isdigit(*it) && !isdigit(elems.back()) && elems.size() != 0)
	// 		throw RPN::BadExpressionException();

	// 	// TODO: if more than two number follow

	// 	elems.push_back(*it);
	// }

	// // If the expr doesn't ends with an operator
	// if (isdigit(elems.back()))
	// 	throw RPN::BadExpressionException();

	// for (std::list<char>::const_iterator it = elems.begin(); it != elems.end(); it++)
	// {
	// 	std::cout << *it;
	// }
	// std::cout << std::endl;

	// float result = 0;
	// for (std::list<char>::const_iterator it = elems.begin(); it != elems.end(); it++)
	// {
	// 	if (it == elems.begin())
	// 	{
	// 		result = *it - '0';
	// 		continue;
	// 	}

	// 	switch (*it)
	// 	{
	// 	case '+':
	// 		result += *(--it) - '0';
	// 		it++;
	// 		break;
	// 	case '-':
	// 		result -= *(--it) - '0';
	// 		it++;
	// 		break;
	// 	case '/':
	// 		result /= *(--it) - '0';
	// 		it++;
	// 		break;
	// 	case '*':
	// 		result *= *(--it) - '0';
	// 		it++;
	// 		break;
	// 	}
	// 	std::cout << *it << std::endl;
	// }


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

	return elems.front();
}

const char*	RPN::BadExpressionException::what(void) const throw()
{
	return ("Error");
}
