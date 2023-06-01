/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:52:54 by pszleper          #+#    #+#             */
/*   Updated: 2023/06/01 07:52:40 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called!" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat& cat_to_copy): Animal()
{
	std::cout << "Cat copy constructor called!" << std::endl;
	this->type = cat_to_copy.type;
	this->brain = new Brain(*(cat_to_copy.brain));
}

Cat&	Cat::operator=(const Cat& cat_to_copy)
{
	std::cout << "Cat copy assignment constructor called!" << std::endl;
	if (this == &cat_to_copy)
		return (*this);
	this->type = cat_to_copy.type;
	delete this->brain;
	this->brain = new Brain(*(cat_to_copy.brain));
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called!" << std::endl;
	delete this->brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}

// for testing deep copy on the cat
Brain*	Cat::getBrain(void) const
{
	return (this->brain);
}
