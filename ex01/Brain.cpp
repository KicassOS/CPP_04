/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:54:16 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/30 21:57:10 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
}

Brain::Brain(const Brain& brain_to_copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain_to_copy.ideas[i];
}

Brain& Brain::operator=(const Brain& brain_to_copy)
{
	std::cout << "Brain copy assignment constructor called" << std::endl;
	if (this == &brain_to_copy)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain_to_copy.ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::setFirstIdea(const std::string& idea)
{
	std::string idea_copy = idea;
	this->ideas[0] = idea_copy;
}

std::string	Brain::getFirstIdea(void) const
{
	return (this->ideas[0]);
}
