/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:51:43 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/09 14:19:14 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string		brain		= "HI THIS IS BRAIN";
	std::string*	brainPTR	= &brain;
	std::string&	brainREF	= brain;

	std::cout << "brain value :\t\t\t" << brain << std::endl;
	std::cout << "Value pointed by brainPTR :\t" << *brainPTR << std::endl;
	std::cout << "Value pointed by brainREF :\t" << brainREF << std::endl;

	return 0;
}
