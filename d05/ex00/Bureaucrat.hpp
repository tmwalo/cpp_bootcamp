/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 08:44:28 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/12 11:28:59 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <iostream>

class Bureaucrat
{

	private:
		std::string const	_name;
		int					_grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);
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
		Bureaucrat &			operator=(Bureaucrat const & rhs);
		std::string				getName(void) const;
		int						getGrade(void) const;
		void					setGrade(int val);
		void					incrementGrade(void);
		void					decrementGrade(void);

};

std::ostream &				operator<<(std::ostream & out, Bureaucrat const & rhs);

#endif
