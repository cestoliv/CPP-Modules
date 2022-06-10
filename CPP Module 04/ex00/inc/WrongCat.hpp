/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:10:39 by ocartier          #+#    #+#             */
/*   Updated: 2022/06/10 14:38:51 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_H
# define WRONGCAT_CLASS_H

# include <string>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
public:
	WrongCat(void);
	//WrongCat(std::string type);
	WrongCat(const WrongCat &src);
	virtual				~WrongCat(void);
	WrongCat &operator	=(const WrongCat &src);

	void				makeSound(void) const;
};

#endif
