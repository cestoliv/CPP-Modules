/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 08:37:43 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/07 11:02:24 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

class PhoneBook {
	Contact	*contacts;
	int		size;
	int		next_add_index;

public:
	PhoneBook(void);
	~PhoneBook(void);

	int		get_size();
	void	add_contact();
	void	list_contacts();
	void	display_contact(int index);
};
