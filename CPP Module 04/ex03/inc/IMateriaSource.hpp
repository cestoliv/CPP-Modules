/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:10:52 by ocartier          #+#    #+#             */
/*   Updated: 2022/06/08 18:18:34 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_CLASS_HPP
#define IMATERIASOURCE_CLASS_HPP

# include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual				~IMateriaSource() {}
	virtual void		learnMateria(AMateria *) = 0;
	virtual AMateria	*createMateria(std::string const &type) = 0;
};

#endif
