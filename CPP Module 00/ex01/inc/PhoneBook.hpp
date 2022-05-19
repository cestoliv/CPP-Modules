/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 08:37:43 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/19 09:29:47 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook-app.hpp"

class PhoneBook {
private:
	Contact	*_contacts;
	int		_size;

public:
	PhoneBook(void);
	~PhoneBook(void);

	int		get_size();
	void	add_contact();
	void	list_contacts();
	void	display_contact(int index);
};
