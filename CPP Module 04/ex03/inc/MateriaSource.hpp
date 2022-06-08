/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:11:46 by ocartier          #+#    #+#             */
/*   Updated: 2022/06/08 18:29:36 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
#define MATERIASOURCE_CLASS_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
protected:
	static const int	_inventory_size = 4;
	AMateria			*_inventory[_inventory_size];

public:
	MateriaSource(void);
	MateriaSource(const MateriaSource &src);
	MateriaSource	&operator =(const MateriaSource &src);

	virtual			~MateriaSource();

	void			learnMateria(AMateria *m);
	AMateria		*createMateria(const std::string &type);
};

#endif
