/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:30:13 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/09 12:02:19 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	class GradeTooHighException : public std::exception {
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
		virtual const char *what() const throw();
	};
	class FormUnsignedException : public std::exception {
		virtual const char *what() const throw();
	};

	public:
		Form();
		Form(const std::string name, const int gradeSign, const int gradeExecute);
		Form(const Form &other);
		virtual ~Form();

		Form	&operator=(const Form &other);

		std::string getName() const;
		bool		getIsSigned() const;
		int			getGradeSign() const;
		int			getGradeExecute() const;

		void			beSigned(const Bureaucrat &b);
		void			execute(const Bureaucrat &executor) const;
		virtual void	action() const = 0;
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeSign;
		const int			_gradeExecute;
};

std::ostream &operator<<(std::ostream &os, const Form &output);

#endif