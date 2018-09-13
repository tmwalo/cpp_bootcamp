/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 08:45:56 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/12 11:42:04 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
# include "Bureaucrat.hpp"

class Form
{

	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExecute;
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				GradeTooHighException(GradeTooHighException const & src);
				virtual ~GradeTooHighException(void) throw();
				GradeTooHighException &		operator=(GradeTooHighException const & rhs);
				virtual const char*			what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				GradeTooLowException(GradeTooLowException const & src);
				virtual ~GradeTooLowException(void) throw();
				GradeTooLowException &		operator=(GradeTooLowException const & rhs);
				virtual const char*			what() const throw();
		};

	public:
		Form(void);
		Form(std::string const name, int const gradeToSign, int const gradeToExecute);
		Form(Form const & src);
		~Form(void);
		Form &					operator=(Form const & rhs);
		std::string				getName(void) const;
		bool					getSigned(void) const;
		int 					getGradeToSign(void) const;
		int 					getGradeToExecute(void) const;
		void					setSigned(bool val);
		void					beSigned(Bureaucrat const & signee);

};

std::ostream &					operator<<(std::ostream & out, Form const & rhs);

#endif
