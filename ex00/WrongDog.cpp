/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 23:14:30 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/30 15:43:47 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(void)
{
	std::cout << "WrongDog default constructor called!" << std::endl;
	this->type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog& dog_to_copy): WrongAnimal()
{
	std::cout << "WrongDog copy constructor called!" << std::endl;
	this->type = dog_to_copy.type;
}

WrongDog&	WrongDog::operator=(const WrongDog& dog_to_copy)
{
	if (this == &dog_to_copy)
		return (*this);
	std::cout << "WrongDog copy assignment constructor called!" << std::endl;
	this->type = dog_to_copy.type;
	return (*this);
}

WrongDog::~WrongDog(void)
{
	std::cout << "WrongDog destructor called!" << std::endl;
}

void	WrongDog::makeSound(void) const
{
	std::cout << "WrongWoof!" << std::endl;
}
