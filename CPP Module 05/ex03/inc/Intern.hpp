/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:55:16 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/24 15:46:46 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_H
# define INTERN_CLASS_H

# include <string>
# include "AForm.hpp"

class Intern {
public:
	Intern(void);
	Intern(const Intern &src);
	~Intern(void);
	Intern	&operator =(const Intern &src);

	AForm	*makeForm(std::string name, std::string target);
};

#endif
