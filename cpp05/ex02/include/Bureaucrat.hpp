/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:14:48 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/09 12:05:47 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat {
	class GradeTooHighException : public std::exception {
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
		virtual const char *what() const throw();
	};

	public:
		Bureaucrat();
		Bureaucrat(const std::string name);
		Bureaucrat(const std::string name, const int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();

		Bureaucrat	&operator=(const Bureaucrat &other);

		std::string	getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
		void		signForm(Form &form);
		void		executeForm(const Form &form);
	private:
		const std::string	_name;
		int					_grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &output);

#endif