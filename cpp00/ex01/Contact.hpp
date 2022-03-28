/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:41:18 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/11 10:51:50 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

static const std::string prefix[5] = {
	"First Name ✗ ", "Last Name ✗ ", "Nickname ✗ ",
	"Phone Number ✗ ", "Darkest Secret ✗ "
};

class Contact {
	public:
		void 	setContact();
		int		getListEntry(int id);
		int		getSearchEntry();
	private:
		std::string	info[5];
};

#endif
