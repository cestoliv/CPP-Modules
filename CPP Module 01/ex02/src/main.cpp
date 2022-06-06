/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:51:43 by ocartier          #+#    #+#             */
/*   Updated: 2022/06/06 10:58:56 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string		brain		= "HI THIS IS BRAIN";
	std::string*	brainPTR	= &brain;
	std::string&	brainREF	= brain;

	std::cout << "(" << &brain << ") brain value :\t\t\t" << brain << std::endl;
	std::cout << "(" << brainPTR << ") Value pointed by brainPTR :\t" << *brainPTR << std::endl;
	std::cout << "(" << &brainREF << ") Value pointed by brainREF :\t" << brainREF << std::endl;

	return 0;
}
