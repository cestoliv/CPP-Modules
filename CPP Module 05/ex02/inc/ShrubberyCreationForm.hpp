/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:22:58 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/24 10:52:41 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_CLASS_H
# define SHRUBBERYCREATIONFORM_CLASS_H

# include <string>
# include "Bureaucrat.hpp"
# include "Form.hpp"

# undef  SIGN_GRADE
# define SIGN_GRADE 145
# undef  EXEC_GRADE
# define EXEC_GRADE 137

class ShrubberyCreationForm: public Form
{
private:
	const std::string	_target;

	void				beExecuted(void) const;

public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm	&operator =(const ShrubberyCreationForm &src);
};

#endif
