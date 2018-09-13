/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 14:07:06 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/12 16:42:05 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("default", 25, 5)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("default", 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form("default", 25, 5), _target(src.getName())
{
	*this = src;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm &		PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{

	return (*this);
}

std::string						PresidentialPardonForm:getTarget(void) const
{
	return (this->_target);
}

void							virtual execute(Bureaucratconst & executor) const
{
	this->beExecuted(executor);
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox";
}
