/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:46:28 by pszleper          #+#    #+#             */
/*   Updated: 2023/06/01 07:19:46 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
			Brain(void);								// canonical
			Brain(const Brain& brain_to_copy);			// canonical
	Brain&	operator=(const Brain& brain_to_copy);		// canonical
			virtual ~Brain(void);								// canonical

	// not required, purely for testing deep copy
	std::string	getFirstIdea(void) const;
	void		setFirstIdea(const std::string& idea);
	// end of not required

	private:
		std::string	ideas[100];
};

#endif
