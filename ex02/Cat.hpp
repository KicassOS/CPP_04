/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 23:13:01 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/30 22:25:53 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
class Cat : public Animal
{
	public:
			Cat(void);								// canonical
			Cat(const Cat& cat_to_copy);		// canonical
	Cat&	operator=(const Cat& cat_to_copy);	// canonical
			virtual ~Cat(void);								// canonical

			virtual void	makeSound(void) const;
			Brain*	getBrain(void) const;
	private:
		Brain*	brain;
};

#endif
