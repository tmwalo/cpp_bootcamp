/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:02:25 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/08 18:15:18 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

const std::string		ScavTrap::_pieEating = "pie eating";
const std::string		ScavTrap::_rockPaperScissor = "rock paper scissor";
const std::string		ScavTrap::_staring = "staring";
const std::string		ScavTrap::_dance = "dance";
const std::string		ScavTrap::_singing = "singing";

ScavTrap::ScavTrap(void) : _hitPts(100),
							_maxHitPts(100),
							_energyPts(50),
							_maxEnergyPts(50),
							_lvl(1),
							_name("defaultScavTrap"),
							_meleeAttckDmg(20),
							_rangedAttckDmg(15),
							_armorDmgReduction(3)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : _hitPts(100),
										_maxHitPts(100),
										_energyPts(50),
										_maxEnergyPts(50),
										_lvl(1),
										_name(name),
										_meleeAttckDmg(20),
										_rangedAttckDmg(15),
										_armorDmgReduction(3)
{
	std::cout << "ScavTrap parametric constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src)
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

void			ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << this->getName() << " ScavTrap attacks " << target << " at melee range, causing " << this->getMeleeAttckDmg() << " points of damage" << std::endl;
	return ;
}

void			ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << this->getName() << " ScavTrap attacks " << target << " at range, causing " << this->getRangedAttckDmg() << " points of damage" << std::endl;
	return ;
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

void			ScavTrap::takeDamage(unsigned int amount)
{
	int		effectiveDmg;
	int		newHitPts;

	effectiveDmg = amount - this->getArmorDmgReduction();
	if (effectiveDmg > this->getHitPts())
		newHitPts = 0;
	else
		newHitPts = this->getHitPts() - effectiveDmg;
	this->setHitPts(newHitPts);
	std::cout << this->getName() << " ScavTrap took damage of " << effectiveDmg << " after armor reduction" << std::endl;
	return ;
}

void			ScavTrap::beRepaired(unsigned int amount)
{
	int		newHitPts;
	int		hpPlusHeal;

	hpPlusHeal = this->getHitPts() + amount;
	if (hpPlusHeal < this->getMaxHitPts())
		newHitPts = hpPlusHeal;
	else
		newHitPts = this->getMaxHitPts();
	this->setHitPts(newHitPts);
	std::cout << this->getName() << " ScavTrap healed to " << this->getHitPts() << " of hit points" << std::endl;
	return ;
}

int				ScavTrap::getHitPts(void) const
{
	return (this->_hitPts);
}

int				ScavTrap::getMaxHitPts(void) const
{
	return (this->_maxHitPts);
}

int				ScavTrap::getEnergyPts(void) const
{
	return (this->_energyPts);
}

int				ScavTrap::getMaxEnergyPts(void) const
{
	return (this->_maxEnergyPts);
}

int				ScavTrap::getLvl(void) const
{
	return (this->_lvl);
}

std::string		ScavTrap::getName(void) const
{
	return (this->_name);
}

int				ScavTrap::getMeleeAttckDmg(void) const
{
	return (this->_meleeAttckDmg);
}

int				ScavTrap::getRangedAttckDmg(void) const
{
	return (this->_rangedAttckDmg);
}

int				ScavTrap::getArmorDmgReduction(void) const
{
	return (this->_armorDmgReduction);
}

void			ScavTrap::setHitPts(int val)
{
	this->_hitPts = val;
}

void			ScavTrap::setMaxHitPts(int val)
{
	this->_maxHitPts = val;
}

void			ScavTrap::setEnergyPts(int val)
{
	this->_energyPts = val;
}

void			ScavTrap::setMaxEnergyPts(int val)
{
	this->_maxEnergyPts = val;
}

void			ScavTrap::setLvl(int val)
{
	this->_lvl = val;
}

void			ScavTrap::setName(std::string val)
{
	this->_name = val;
}

void			ScavTrap::setMeleeAttckDmg(int val)
{
	this->_meleeAttckDmg = val;
}

void			ScavTrap::setRangedAttckDmg(int val)
{
	this->_rangedAttckDmg = val;
}

void			ScavTrap::setArmorDmgReduction(int val)
{
	this->_armorDmgReduction = val;
}
