/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:53:16 by ocartier          #+#    #+#             */
/*   Updated: 2022/06/13 20:07:23 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <string.h>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main()
{
	// Dosen't work, because Animal is abstract
	//AAnimal	ani = AAnimal();
	//ani.makeSound();

	AAnimal	*cat = new Cat();
	cat->makeSound();

	// Dosen't work, because Animal is abstract
	//AAnimal	dog = Dog();
	//dog.makeSound();

	delete cat;

	return 0;
}
