/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 23:14:03 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/30 15:30:11 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor called!" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& cat_to_copy): WrongAnimal()
{
	std::cout << "WrongCat copy constructor called!" << std::endl;
	this->type = cat_to_copy.type;
}

WrongCat&	WrongCat::operator=(const WrongCat& cat_to_copy)
{
	if (this == &cat_to_copy)
		return (*this);
	std::cout << "WrongCat copy assignment constructor called!" << std::endl;
	this->type = cat_to_copy.type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called!" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongMeow!" << std::endl;
}

