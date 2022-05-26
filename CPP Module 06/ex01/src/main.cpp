/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:53:16 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/26 15:41:36 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdint.h>
#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int	main(void)
{
	Data	*darkvador = new Data;

	darkvador->pi = 3.141592;
	darkvador->compliment = "I am you father... Wait... It's not a compliment";
	darkvador->birthday = 32;

	std::cout << "DarkVador: " << std::endl;
	std::cout << "\tpi: " << darkvador->pi << std::endl;
	std::cout << "\tcompliment: " << darkvador->compliment << std::endl;
	std::cout << "\tbirthday: " << darkvador->birthday << std::endl;

	std::cout << std::endl;

	uintptr_t	darkvaraw = serialize(darkvador);
	std::cout << "DarkvaRaw: " << darkvaraw << std::endl;

	std::cout << std::endl;

	Data	*fromrawdor = deserialize(darkvaraw);
	std::cout << "FromRawDor: " << std::endl;
	std::cout << "\tpi: " << fromrawdor->pi << std::endl;
	std::cout << "\tcompliment: " << fromrawdor->compliment << std::endl;
	std::cout << "\tbirthday: " << fromrawdor->birthday << std::endl;

	delete darkvador;
	return 0;
}
