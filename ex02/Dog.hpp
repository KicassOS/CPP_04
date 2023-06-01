/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 23:13:16 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/30 22:26:00 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
			Dog(void);								// canonical
			Dog(const Dog& dog_to_copy);		// canonical
	Dog&	operator=(const Dog& dog_to_copy);	// canonical
			virtual ~Dog(void);								// canonical

			virtual void	makeSound(void) const;
			Brain*	getBrain(void) const;
	private:
		Brain*	brain;
};

#endif
