/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:53:16 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/20 18:19:31 by ocartier         ###   ########.fr       */
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

	return 0;
}
