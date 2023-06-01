/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 23:12:02 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/30 18:57:09 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called!" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal& animal_to_copy)
{
	std::cout << "Animal copy constructor called!" << std::endl;
	this->type = animal_to_copy.type;
}

Animal&	Animal::operator=(const Animal& animal_to_copy)
{
	std::cout << "Animal copy assignment constructor called!" << std::endl;
	if (this == &animal_to_copy)
		return (*this);
	this->type = animal_to_copy.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called!" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal makes an animal sound" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
