/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 09:50:08 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/08 18:26:39 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

const unsigned int		FragTrap::_neverEspededAttckDmg = 25;
const unsigned int		FragTrap::_deadlyDayAttckDmg = 10;
const unsigned int		FragTrap::_deWayAttckDmg = 42;
const unsigned int		FragTrap::_hadoKenAttckDmg = 50;
const unsigned int		FragTrap::_finishHimAttckDmg = 100;

FragTrap::FragTrap(void) : ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Parametric constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	*this = src;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Default destructor called" << std::endl;
	return ;
}

FragTrap &		FragTrap::operator=(FragTrap const & rhs)
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

void			FragTrap::neverEspededAttack(std::string const & target)
{
	if (this->getEnergyPts() >= this->getSpecialAttckCost())
	{
		this->setEnergyPts(this->getEnergyPts() - this->getSpecialAttckCost());
		std::cout << this->getName() << " attacks " << target << ", causing " << FragTrap::_neverEspededAttckDmg << " points of damage" << std::endl;
	}
	else
		std::cout << "out of energy" << std::endl;
	return ;
}

void			FragTrap::deadlyDayAttack(std::string const & target)
{
	if (this->getEnergyPts() >= this->getSpecialAttckCost())
	{
		this->setEnergyPts(this->getEnergyPts() - this->getSpecialAttckCost());
		std::cout << this->getName() << " attacks " << target << ", causing " << FragTrap::_deadlyDayAttckDmg << " points of damage" << std::endl;
	}
	else
		std::cout << "out of energy" << std::endl;
	return ;
}

void			FragTrap::deWayAttack(std::string const & target)
{
	if (this->getEnergyPts() >= this->getSpecialAttckCost())
	{
		this->setEnergyPts(this->getEnergyPts() - this->getSpecialAttckCost());
		std::cout << this->getName() << " attacks " << target << ", causing " << FragTrap::_deWayAttckDmg << " points of damage" << std::endl;
	}
	else
		std::cout << "out of energy" << std::endl;
	return ;
}

void			FragTrap::hadoKenAttack(std::string const & target)
{
	if (this->getEnergyPts() >= this->getSpecialAttckCost())
	{
		this->setEnergyPts(this->getEnergyPts() - this->getSpecialAttckCost());
		std::cout << this->getName() << " attacks " << target << ", causing " << FragTrap::_hadoKenAttckDmg << " points of damage" << std::endl;
	}
	else
		std::cout << "out of energy" << std::endl;
	return ;
}

void			FragTrap::finishHimAttack(std::string const & target)
{
	if (this->getEnergyPts() >= this->getSpecialAttckCost())
	{
		this->setEnergyPts(this->getEnergyPts() - this->getSpecialAttckCost());
		std::cout << this->getName() << " attacks " << target << ", causing " << FragTrap::_finishHimAttckDmg << " points of damage" << std::endl;
	}
	else
		std::cout << "out of energy" << std::endl;
	return ;
}

void			FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int		randInt;
	int		max;
	int 	min;
	int		number_of_special_attacks;

	number_of_special_attacks = 5;
	min = 1;
	max = number_of_special_attacks;
	std::srand(time(NULL));
	randInt = (std::rand() % max) + min;
	if (randInt == 1)
		this->neverEspededAttack(target);
	else if (randInt == 2)
		this->deadlyDayAttack(target);
	else if (randInt == 3)
		this->deWayAttack(target);
	else if (randInt == 4)
		this->hadoKenAttack(target);
	else if (randInt == 5)
		this->finishHimAttack(target);
}

int				FragTrap::getSpecialAttckCost(void) const
{
	return (this->_specialAttckCost);
}

void			FragTrap::setSpecialAttckCost(int val)
{
	this->_specialAttckCost = val;
}
