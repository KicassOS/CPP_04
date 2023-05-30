/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:37:44 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/30 15:08:56 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
			WrongAnimal(void);								// canonical
			WrongAnimal(const WrongAnimal& animal_to_copy);		// canonical
	WrongAnimal&	operator=(const WrongAnimal& animal_to_copy);	// canonical
			~WrongAnimal(void);								// canonical

			virtual void	makeSound(void) const;

	protected:
		std::string	type;
};

#endif
