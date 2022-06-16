/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:30:44 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/16 12:01:13 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <stack>

template <typename type>
class MutantStack : public std::stack<type> {
	public:
		MutantStack();
		MutantStack(const MutantStack &other);
		~MutantStack();

		MutantStack	&operator=(const MutantStack &other);

		typedef typename std::stack<type>::container_type::iterator	iterator;

		iterator	begin();
		iterator	end();
};

# include "MutantStack.tpp"

#endif