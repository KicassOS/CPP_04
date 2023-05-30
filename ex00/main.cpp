/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:19:34 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/30 16:08:39 by pszleper         ###   ########.fr       */
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
	Cat			cat_copy(cat);
	Dog			dog_copy;
	dog_copy = dog;

	std::cout << "\nTesting the implicit getType() function:" << std::endl;
	std::cout << "Animal     : " << animal.getType() << std::endl;
	std::cout << "Cat        : " << cat.getType() << std::endl;
	std::cout << "Dog        : " << dog.getType() << std::endl;
	std::cout << "WrongAnimal: " << wrong_animal.getType() << std::endl;
	std::cout << "WrongCat   : " << wrong_cat.getType() << std::endl;
	std::cout << "WrongDog   : " << wrong_dog.getType() << std::endl;

	std::cout << "\nTesting the makeSound() function for all classes" << std::endl;
	std::cout << "First, the Animal     : ";
	animal.makeSound();
	
	std::cout << "Then, the Cats        : ";
	cat.makeSound();
	cat_copy.makeSound();
	
	std::cout << "Then, the Dogs        : ";
	dog.makeSound();
	dog_copy.makeSound();

	std::cout << "Then, the WrongAnimal : ";
	wrong_animal.makeSound();

	std::cout << "Then, the WrongCat    : ";
	wrong_cat.makeSound();

	std::cout << "Finally, the WrongDog : ";
	wrong_dog.makeSound();
	std::cout << std::endl;

	std::cout << "Now, call them through pointers to parent class" << std::endl;
	Animal* animal_ptr = &cat;
	WrongAnimal* wrong_animal_ptr = &wrong_cat;
	std::cout << "animal_ptr      : ";
	animal_ptr->makeSound();
	std::cout << "wrong_animal_ptr: ";
	wrong_animal_ptr->makeSound();
	std::cout << std::endl;
}
