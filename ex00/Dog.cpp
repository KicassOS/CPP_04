/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 23:13:10 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/30 18:57:35 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called!" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& dog_to_copy): Animal()
{
	std::cout << "Dog copy constructor called!" << std::endl;
	this->type = dog_to_copy.type;
}

Dog&	Dog::operator=(const Dog& dog_to_copy)
{
	std::cout << "Dog copy assignment constructor called!" << std::endl;
	if (this == &dog_to_copy)
		return (*this);
	this->type = dog_to_copy.type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called!" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof!" << std::endl;
}
