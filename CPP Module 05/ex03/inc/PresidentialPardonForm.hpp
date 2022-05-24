/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:59:10 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/24 14:57:06 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_CLASS_H
# define PRESIDENTIALPARDONFORM_CLASS_H

# include <string>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

# undef  SIGN_GRADE
# define SIGN_GRADE 25
# undef  EXEC_GRADE
# define EXEC_GRADE 5

class PresidentialPardonForm: public AForm {
private:
	const std::string	_target;

	void				beExecuted(void) const;

public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &src);
	~PresidentialPardonForm(void);
	PresidentialPardonForm	&operator =(const PresidentialPardonForm &src);
};

#endif
