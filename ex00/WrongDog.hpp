/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 23:14:38 by pszleper          #+#    #+#             */
/*   Updated: 2023/06/01 07:43:36 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
	public:
			WrongDog(void);								// canonical
			WrongDog(const WrongDog& dog_to_copy);		// canonical
	WrongDog&	operator=(const WrongDog& dog_to_copy);	// canonical
			virtual	~WrongDog(void);								// canonical

			void	makeSound(void) const;
};

#endif
