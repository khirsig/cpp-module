/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:30:52 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/13 14:59:07 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Data.hpp"

std::uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<std::uintptr_t>(ptr));
}

Data* deserialize(std::uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data *data = new Data("The tjensen & hepple Raytracer is the best raytracer.");

	std::cout << "### Before Serialization ###"
		<< std::endl
		<< "Content: "
		<< data->getContent()
		<< std::endl
		<< "Address: "
		<< &data
		<< std::endl;

	std::uintptr_t	ptr;

	ptr = serialize(data);
	data = deserialize(ptr);

	std::cout << "### After Serialization ###"
		<< std::endl
		<< "Content: "
		<< data->getContent()
		<< std::endl
		<< "Address: "
		<< &data
		<< std::endl;
	return (0);
}
