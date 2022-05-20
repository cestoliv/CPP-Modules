/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:34:42 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/20 18:16:02 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_CLASS_H
# define AANIMAL_CLASS_H

# include <string>
# include "Brain.hpp"

class AAnimal {
protected:
	std::string	_type;

public:
	AAnimal(void);
	AAnimal(std::string type);
	AAnimal(const AAnimal &src);
	virtual ~AAnimal(void);
	AAnimal	&operator =(const AAnimal &src);

	std::string		getType(void) const;
	virtual void	makeSound(void) const = 0;
};

#endif
