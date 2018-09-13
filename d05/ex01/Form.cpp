/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 08:46:03 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/12 12:19:50 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("default Form"),
					_signed(false),
					_gradeToSign(150),
					_gradeToExecute(150)
{
	return ;
}

Form::Form(std::string const name, int const gradeToSign, int const gradeToExecute) :
			_name(name),
			_signed(false),
			_gradeToSign(gradeToSign),
			_gradeToExecute(gradeToExecute)
{
	if (this->_gradeToSign < 1)
		throw Form::GradeTooHighException();
	else if (this->_gradeToSign > 150)
		throw Form::GradeTooLowException();
	if (this->_gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (this->_gradeToExecute > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(Form const & src) : _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
	*this = src;
	return ;
}

Form::~Form(void)
{
	return ;
}

Form &		Form::operator=(Form const & rhs)
{
	this->_signed = rhs.getSigned();
	return (*this);
}

Form::GradeTooHighException::GradeTooHighException(void)
{
	return ;
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src)
{
	*this = src;
	return ;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
	return ;
}

Form::GradeTooHighException &		Form::GradeTooHighException::operator=(GradeTooHighException const & rhs)
{
	(void)rhs;
	return (*this);
}

const char*								Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

Form::GradeTooLowException::GradeTooLowException(void)
{
	return ;
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src)
{
	*this = src;
	return ;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
	return ;
}

Form::GradeTooLowException &		Form::GradeTooLowException::operator=(GradeTooLowException const & rhs)
{
	(void)rhs;
	return (*this);
}

const char*								Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::string 						Form::getName(void) const
{
	return (this->_name);
}

bool								Form::getSigned(void) const
{
	return (this->_signed);
}

int 								Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int 								Form::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

void								Form::setSigned(bool val)
{
	this->_signed = val;
}

void								Form::beSigned(Bureaucrat const & signee)
{
	if (signee.getGrade() <= this->getGradeToSign())
	{
		this->setSigned(true);
		signee.signForm(this->getName(), true);
	}
	else
	{
		signee.signForm(this->_name, false);
		throw Form::GradeTooLowException();
	}
}

std::ostream &				operator<<(std::ostream & out, Form const & rhs)
{
	out << "form name: " << rhs.getName() << ", signed: " << rhs.getSigned() << ", grade to sign: " << rhs.getGradeToSign() << ", grade to execute: " << rhs.getGradeToExecute();
	return (out);
}
