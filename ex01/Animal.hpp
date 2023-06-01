/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 23:12:14 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/30 20:35:42 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
			Animal(void);								// canonical
			Animal(const Animal& animal_to_copy);		// canonical
	Animal&	operator=(const Animal& animal_to_copy);	// canonical
			virtual ~Animal(void);						// canonical

			virtual void	makeSound(void) const;
			std::string		getType(void) const;

	protected:
		std::string	type;
};

#endif
