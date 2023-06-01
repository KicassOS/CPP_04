/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 23:13:10 by pszleper          #+#    #+#             */
/*   Updated: 2023/06/01 07:52:52 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called!" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& dog_to_copy): Animal()
{
	std::cout << "Dog copy constructor called!" << std::endl;
	this->type = dog_to_copy.type;
	this->brain = new Brain(*(dog_to_copy.brain));
}

Dog&	Dog::operator=(const Dog& dog_to_copy)
{
	std::cout << "Dog copy assignment constructor called!" << std::endl;
	if (this == &dog_to_copy)
		return (*this);
	this->type = dog_to_copy.type;
	delete this->brain;
	this->brain = new Brain(*(dog_to_copy.brain));
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called!" << std::endl;
	delete this->brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof!" << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return (this->brain);
}
