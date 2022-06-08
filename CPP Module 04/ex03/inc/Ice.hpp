/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:07:33 by ocartier          #+#    #+#             */
/*   Updated: 2022/06/08 18:27:49 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
#define ICE_CLASS_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(const Ice &src);
	Ice		&operator =(const Ice &src);

	virtual	~Ice();

	Ice		*clone() const;
	void	use(ICharacter &target);
};

#endif
