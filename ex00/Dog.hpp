/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 23:13:16 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/30 15:10:35 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
			Dog(void);								// canonical
			Dog(const Dog& dog_to_copy);		// canonical
	Dog&	operator=(const Dog& dog_to_copy);	// canonical
			~Dog(void);								// canonical

			void	makeSound(void) const;
};

#endif
