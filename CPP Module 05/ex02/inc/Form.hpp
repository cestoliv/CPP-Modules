/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:40:51 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/24 10:03:41 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_H
# define FORM_CLASS_H

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string	_name;
	bool				_isSigned;
	const unsigned int	_signGrade;
	const unsigned int	_execGrade;

	virtual void	beExecuted(void) const = 0;

public:
	Form(void);
	Form(std::string name, unsigned int signGrade, unsigned int execGrade);
	Form(const Form &src);
	~Form(void);
	Form	&operator =(const Form &src);

	std::string		getName(void) const;
	bool			isSigned(void) const;
	unsigned int	getSignGrade(void) const;
	unsigned int	getExecGrade(void) const;

	void			beSigned(const Bureaucrat bur);
	void			execute(const Bureaucrat &executor) const;

	class GradeTooHighException: public std::exception {
	public:
		virtual const char* what(void) const throw();
	};

	class GradeTooLowException: public std::exception {
	public:
		virtual const char* what(void) const throw();
	};

	class FormNotSignedException: public std::exception {
	public:
		virtual const char* what(void) const throw();
	};
};

std::ostream	&operator <<(std::ostream &o, const Form &form);

#endif
