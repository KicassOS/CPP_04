/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:19:34 by pszleper          #+#    #+#             */
/*   Updated: 2023/06/01 07:56:45 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	// uncommenting the following line causes an error because Animal is now an abstract class
	// Animal		animal;
	std::cout << "Cat deep copy test" << std::endl;
	Cat			cat;
	cat.getBrain()->setFirstIdea("Deep copy myself");
	Cat			cat_copy(cat);
	std::cout << "cat.getType()      = " << cat.getType() << std::endl;
	std::cout << "cat_copy.getType() = " << cat_copy.getType() << std::endl;
	std::cout << "cat.getBrain()->getFirstIdea()      = " << cat.getBrain()->getFirstIdea() << std::endl;
	std::cout << "cat_copy.getBrain()->getFirstIdea() = " << cat_copy.getBrain()->getFirstIdea() << std::endl;
	std::cout << "\nBrain deep copy test" << std::endl;
	Brain		brain;
	brain.setFirstIdea("Racecar is a palindrome!omg");
	Brain		brain_copy(brain);
	std::cout << "brain.getFirstIdea()      = " << brain.getFirstIdea() << std::endl;
	std::cout << "brain_copy.getFirstIdea() = " << brain_copy.getFirstIdea() << std::endl;
	std::cout << "\nDog deep copy test" << std::endl;
	Dog			dog;
	dog.getBrain()->setFirstIdea("Need some bones!");
	Dog			dog_copy;
	dog_copy = dog;
	std::cout << "dog.getType()      = " << dog.getType() << std::endl;
	std::cout << "dog_copy.getType() = " << dog_copy.getType() << std::endl;
	std::cout << "dog.getBrain()->getFirstIdea()      = " << dog.getBrain()->getFirstIdea() << std::endl;
	std::cout << "dog_copy.getBrain()->getFirstIdea() = " << dog_copy.getBrain()->getFirstIdea() << std::endl;

	std::cout << "\nTesting the implicit getType() function:" << std::endl;
	// std::cout << "Animal     : " << animal.getType() << std::endl;
	std::cout << "Cat        : " << cat.getType() << std::endl;
	std::cout << "Dog        : " << dog.getType() << std::endl;

	std::cout << "\nTesting the makeSound() function for all classes" << std::endl;
	// std::cout << "Animal     : ";
	// animal.makeSound();
	
	std::cout << "Cat        : ";
	cat.makeSound();
	
	std::cout << "Dog        : ";
	dog.makeSound();

	std::cout << "Now, call makeSound() through pointer to parent class" << std::endl;
	Animal* animal_ptr = &cat;
	std::cout << "animal_ptr      : ";
	animal_ptr->makeSound();
	std::cout << std::endl;

	std::cout << "\nTesting with array of 8 Animals, 4 Cats and 4 Dogs" << std::endl;
	Animal*	animals_arr[8];
	for (int i = 0; i < 8; i++)
	{
		if (i < 4)
			animals_arr[i] = new Cat();
		else
			animals_arr[i] = new Dog();
	}

	std::cout << "\n\nLet's check their types..." << std::endl;
	for (int i = 0; i < 8; i++)
		std::cout << animals_arr[i]->getType() << " ";
	std::cout << std::endl;

	std::cout << "\nLet's delete them all to check for leaks" << std::endl;
	for (int i = 0; i < 8; i++)
		delete animals_arr[i];
}
