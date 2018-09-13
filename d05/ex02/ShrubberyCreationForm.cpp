/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 13:57:08 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/12 16:42:10 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("default", 145, 137)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("default", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form("default", 145, 137), _target(src.getTarget())
{
	*this = src;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm &		ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{

	return (*this);
}

std::string					ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void						virtual execute(Bureaucratconst & executor) const
{
	this->beExecuted(executor);
	std::cout << "create file " << this->getTarget() << std::endl;
}
