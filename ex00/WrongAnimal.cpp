/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:37:35 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/30 16:07:35 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor called!" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& animal_to_copy)
{
	std::cout << "WrongAnimal copy constructor called!" << std::endl;
	this->type = animal_to_copy.type;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& animal_to_copy)
{
	if (this == &animal_to_copy)
		return (*this);
	std::cout << "WrongAnimal copy assignment constructor called!" << std::endl;
	this->type = animal_to_copy.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called!" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal makes a wrong animal sound" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}
