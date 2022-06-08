/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:03:37 by ocartier          #+#    #+#             */
/*   Updated: 2022/06/08 18:26:11 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure(void);
	Cure(const Cure &src);
	Cure	&operator =(const Cure &src);

	virtual	~Cure();

	Cure	*clone() const;
	void	use(ICharacter &target);
};

#endif
