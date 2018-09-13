/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:02:25 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/08 18:25:28 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

const std::string		ScavTrap::_pieEating = "pie eating";
const std::string		ScavTrap::_rockPaperScissor = "rock paper scissor";
const std::string		ScavTrap::_staring = "staring";
const std::string		ScavTrap::_dance = "dance";
const std::string		ScavTrap::_singing = "singing";

ScavTrap::ScavTrap(void) : ClapTrap(void)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap parametric constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	*this = src;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrav Default destructor called" << std::endl;
	return ;
}

ScavTrap &		ScavTrap::operator=(ScavTrap const & rhs)
{
	this->_hitPts = rhs.getHitPts();
	this->_maxHitPts = rhs.getMaxHitPts();
	this->_energyPts = rhs.getEnergyPts();
	this->_maxEnergyPts = rhs.getMaxEnergyPts();
	this->_lvl = rhs.getLvl();
	this->_name = rhs.getName();
	this->_meleeAttckDmg = rhs.getMeleeAttckDmg();
	this->_rangedAttckDmg = rhs.getRangedAttckDmg();
	this->_armorDmgReduction = rhs.getArmorDmgReduction();
	return (*this);
}

void			ScavTrap::pieEating(std::string const & target)
{
	std::cout << this->getName() << " challenges " << target << " to a " << ScavTrap::_pieEating << " contest" << std::endl;
	return ;
}

void			ScavTrap::rockPaperScissor(std::string const & target)
{
	std::cout << this->getName() << " challenges " << target << " to a " << ScavTrap::_rockPaperScissor << " contest" << std::endl;
	return ;
}

void			ScavTrap::staring(std::string const & target)
{
	std::cout << this->getName() << " challenges " << target << " to a " << ScavTrap::_staring << " contest" << std::endl;
	return ;
}

void			ScavTrap::dance(std::string const & target)
{
	std::cout << this->getName() << " challenges " << target << " to a " << ScavTrap::_dance << " contest" << std::endl;
	return ;
}

void			ScavTrap::singing(std::string const & target)
{
	std::cout << this->getName() << " challenges " << target << " to a " << ScavTrap::_singing << " contest" << std::endl;
	return ;
}

void			ScavTrap::challengeNewcomer(std::string const & target)
{
	int		randInt;
	int		max;
	int 	min;
	int		number_of_challenges;

	number_of_challenges = 5;
	min = 1;
	max = number_of_challenges;
	std::srand(time(NULL));
	randInt = (std::rand() % max) + min;
	if (randInt == 1)
		this->pieEating(target);
	else if (randInt == 2)
		this->rockPaperScissor(target);
	else if (randInt == 3)
		this->staring(target);
	else if (randInt == 4)
		this->dance(target);
	else if (randInt == 5)
		this->singing(target);
}
