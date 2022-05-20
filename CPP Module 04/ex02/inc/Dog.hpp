/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:54:45 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/20 18:16:49 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_H
# define DOG_CLASS_H

# include <string>
# include "AAnimal.hpp"

class Dog: public AAnimal {
private:
	Brain	*_brain;
public:
	Dog(void);
	//Dog(std::string type);
	Dog(const Dog &src);
	virtual ~Dog(void);
	Dog	&operator =(const Dog &src);

	virtual void	makeSound(void) const;
	Brain			*getBrain(void) const;
};

#endif
