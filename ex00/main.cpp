/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:19:34 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/30 15:37:47 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int	main(void)
{
	Animal		animal;
	Cat			cat;
	Dog			dog;
	WrongAnimal	wrong_animal;
	WrongCat	wrong_cat;
	WrongDog	wrong_dog;

	std::cout << "\nTesting the makeSound() function for all classes" << std::endl;
	std::cout << "First, the Animal    : ";
	animal.makeSound();
	
	std::cout << "Then, the Cat        : ";
	cat.makeSound();
	
	std::cout << "Then, the Dog        : ";
	dog.makeSound();
	
	std::cout << "Then, the WrongAnimal: ";
	wrong_animal.makeSound();

	std::cout << "Then, the WrongCat   : ";
	wrong_cat.makeSound();

	std::cout << "Finally, the WrongDog: ";
	wrong_dog.makeSound();
	std::cout << std::endl;
}
