/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 08:34:10 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/19 09:29:07 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook-app.hpp"

class Contact {
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

public:
	Contact();
	~Contact(void);

	void		set_infos(std::string first_name, std::string last_name,
		std::string nickname, std::string phone_number, std::string darkest_secret);
	void		show_info(void);
	std::string	get_first_name(long unsigned int size = -1);
	std::string	get_last_name(long unsigned int size = -1);
	std::string	get_nickname(long unsigned int size = -1);
	std::string	get_phone_number(void);
	std::string	get_darkest_secret(void);
};
