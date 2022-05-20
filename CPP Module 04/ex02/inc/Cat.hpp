/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:10:39 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/20 18:16:38 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_H
# define CAT_CLASS_H

# include <string>
# include "AAnimal.hpp"

class Cat: public AAnimal {
private:
	Brain	*_brain;
public:
	Cat(void);
	//Cat(std::string type);
	Cat(const Cat &src);
	virtual ~Cat(void);
	Cat	&operator =(const Cat &src);

	virtual void	makeSound(void) const;
	Brain			*getBrain(void) const;
};

#endif
