/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:56:58 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/20 13:28:37 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_H
# define BRAIN_CLASS_H

# include <string>

# define BRAIN_IDEAS_NUM 100

class Brain {
private:
	std::string ideas[BRAIN_IDEAS_NUM];

public:
	Brain(void);
	Brain(const Brain &src);
	~Brain(void);
	Brain	&operator =(const Brain &src);

	const std::string	*getIdeas(void) const;
	void				setIdeas(const std::string *new_ideas);
	void				setIdea(std::string idea, int index);
};

#endif
