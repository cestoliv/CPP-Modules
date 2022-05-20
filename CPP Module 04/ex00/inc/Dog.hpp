/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:54:45 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/20 10:20:59 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_H
# define DOG_CLASS_H

# include <string>
# include "Animal.hpp"

class Dog: public Animal {
public:
	Dog(void);
	//Dog(std::string type);
	Dog(const Dog &src);
	virtual ~Dog(void);
	Dog	&operator =(const Dog &src);

	virtual void	makeSound(void) const;
};

#endif
