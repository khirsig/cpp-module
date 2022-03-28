/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 08:54:05 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/15 10:46:09 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

# define INV "\033[1;40;37m"
# define END "\033[0m"

static const std::string comparison[3] = {
	"DEBUG", "INFO", "WARNING"
};

class Harl {
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
	private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
};


#endif