/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:37:44 by pszleper          #+#    #+#             */
/*   Updated: 2023/06/01 07:43:24 by pszleper         ###   ########.fr       */
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
			virtual	~WrongAnimal(void);								// canonical

			void			makeSound(void) const;
			std::string		getType(void) const;

	protected:
		std::string	type;
};

#endif
