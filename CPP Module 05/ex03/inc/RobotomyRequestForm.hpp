/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:36:31 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/24 11:23:54 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_CLASS_H
# define RONOTOMYREQUESTFORM_CLASS_H

# include <string>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

# undef  SIGN_GRADE
# define SIGN_GRADE 72
# undef  EXEC_GRADE
# define EXEC_GRADE 45

class RobotomyRequestForm: public AForm
{
private:
	const std::string	_target;

	void				beExecuted(void) const;

public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	~RobotomyRequestForm(void);
	RobotomyRequestForm	&operator =(const RobotomyRequestForm &src);
};

#endif
