/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:34:42 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/20 10:43:21 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_H
# define WRONGANIMAL_CLASS_H

# include <string>

class WrongAnimal {
protected:
	std::string	_type;

public:
	WrongAnimal(void);
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &src);
	virtual ~WrongAnimal(void);
	WrongAnimal	&operator =(const WrongAnimal &src);

	std::string		getType(void) const;
	void	makeSound(void) const;
};

#endif
