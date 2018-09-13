/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 14:05:15 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/12 16:41:28 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("default", 72, 45)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("default", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form("default", 72, 45), _target(src.getTarget())
{
	*this = src;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm &		RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	return (*this);
}

std::string					RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void						virtual execute(Bureaucratconst & executor) const
{
	int		randInt;
	int		max;
	int 	min;

	this->beExecuted(executor);
	min = 0;
	max = 1;
	std::srand(time(NULL));
	randInt = (std::rand() % max) + min;
	if (randInt == 1)
		std::cout << this->getTarget() << " has been robotomized";
	else
		std::cout << this->getTarget() << " robotomizing failed";
}
