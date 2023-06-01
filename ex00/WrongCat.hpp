/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 23:14:13 by pszleper          #+#    #+#             */
/*   Updated: 2023/06/01 07:43:29 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
			WrongCat(void);								// canonical
			WrongCat(const WrongCat& cat_to_copy);		// canonical
	WrongCat&	operator=(const WrongCat& cat_to_copy);	// canonical
			virtual	~WrongCat(void);								// canonical

			void	makeSound(void) const;
};

#endif
