/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:36:39 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/13 14:56:46 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <cstdint>
# include <string>
# include <iostream>

class Data {
	public:
		Data();
		Data(const std::string content);
		Data(const Data &other);
		~Data();

		Data	&operator=(const Data &other);

		std::string	getContent() const;
	private:
		std::string	_content;
};

Data*	deserialize(std::uintptr_t raw);
std::uintptr_t serialize(Data* ptr);


#endif