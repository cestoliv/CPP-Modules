/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:34:42 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/20 18:23:28 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_H
# define ANIMAL_CLASS_H

# include <string>
# include "Brain.hpp"

class Animal {
protected:
	std::string	_type;

public:
	Animal(void);
	Animal(std::string type);
	Animal(const Animal &src);
	virtual ~Animal(void);
	Animal	&operator =(const Animal &src);

	std::string		getType(void) const;
	virtual void	makeSound(void) const;
	virtual Brain	*getBrain(void) const = 0;
};

#endif
