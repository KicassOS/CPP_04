/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:52:54 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/30 15:29:58 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called!" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& cat_to_copy): Animal()
{
	std::cout << "Cat copy constructor called!" << std::endl;
	this->type = cat_to_copy.type;
}

Cat&	Cat::operator=(const Cat& cat_to_copy)
{
	if (this == &cat_to_copy)
		return (*this);
	std::cout << "Cat copy assignment constructor called!" << std::endl;
	this->type = cat_to_copy.type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called!" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}
