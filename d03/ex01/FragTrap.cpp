/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 09:50:08 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/08 15:48:23 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

const unsigned int		FragTrap::_neverEspededAttckDmg = 25;
const unsigned int		FragTrap::_deadlyDayAttckDmg = 10;
const unsigned int		FragTrap::_deWayAttckDmg = 42;
const unsigned int		FragTrap::_hadoKenAttckDmg = 50;
const unsigned int		FragTrap::_finishHimAttckDmg = 100;

FragTrap::FragTrap(void) : _hitPts(100),
							_maxHitPts(100),
							_energyPts(100),
							_maxEnergyPts(100),
							_lvl(1),
							_name("default"),
							_meleeAttckDmg(30),
							_rangedAttckDmg(20),
							_armorDmgReduction(5)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : _hitPts(100),
										_maxHitPts(100),
										_energyPts(100),
										_maxEnergyPts(100),
										_lvl(1),
										_name(name),
										_meleeAttckDmg(30),
										_rangedAttckDmg(20),
										_armorDmgReduction(5)
{
	std::cout << "Parametric constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & src)
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

void			FragTrap::meleeAttack(std::string const & target)
{
	std::cout << this->getName() << " attacks " << target << " at melee range, causing " << this->getMeleeAttckDmg() << " points of damage" << std::endl;
	return ;
}

void			FragTrap::rangedAttack(std::string const & target)
{
	std::cout << this->getName() << " attacks " << target << " at range, causing " << this->getRangedAttckDmg() << " points of damage" << std::endl;
	return ;
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

void			FragTrap::takeDamage(unsigned int amount)
{
	int		effectiveDmg;
	int		newHitPts;

	effectiveDmg = amount - this->getArmorDmgReduction();
	if (effectiveDmg > this->getHitPts())
		newHitPts = 0;
	else
		newHitPts = this->getHitPts() - effectiveDmg;
	this->setHitPts(newHitPts);
	std::cout << this->getName() << " took damage of " << effectiveDmg << " after armor reduction" << std::endl;
	return ;
}

void			FragTrap::beRepaired(unsigned int amount)
{
	int		newHitPts;
	int		hpPlusHeal;

	hpPlusHeal = this->getHitPts() + amount;
	if (hpPlusHeal < this->getMaxHitPts())
		newHitPts = hpPlusHeal;
	else
		newHitPts = this->getMaxHitPts();
	this->setHitPts(newHitPts);
	std::cout << this->getName() << " healed to " << this->getHitPts() << " of hit points" << std::endl;
	return ;
}

int				FragTrap::getHitPts(void) const
{
	return (this->_hitPts);
}

int				FragTrap::getMaxHitPts(void) const
{
	return (this->_maxHitPts);
}

int				FragTrap::getEnergyPts(void) const
{
	return (this->_energyPts);
}

int				FragTrap::getMaxEnergyPts(void) const
{
	return (this->_maxEnergyPts);
}

int				FragTrap::getSpecialAttckCost(void) const
{
	return (this->_specialAttckCost);
}

int				FragTrap::getLvl(void) const
{
	return (this->_lvl);
}

std::string		FragTrap::getName(void) const
{
	return (this->_name);
}

int				FragTrap::getMeleeAttckDmg(void) const
{
	return (this->_meleeAttckDmg);
}

int				FragTrap::getRangedAttckDmg(void) const
{
	return (this->_rangedAttckDmg);
}

int				FragTrap::getArmorDmgReduction(void) const
{
	return (this->_armorDmgReduction);
}

void			FragTrap::setHitPts(int val)
{
	this->_hitPts = val;
}

void			FragTrap::setMaxHitPts(int val)
{
	this->_maxHitPts = val;
}

void			FragTrap::setEnergyPts(int val)
{
	this->_energyPts = val;
}

void			FragTrap::setMaxEnergyPts(int val)
{
	this->_maxEnergyPts = val;
}

void			FragTrap::setSpecialAttckCost(int val)
{
	this->_specialAttckCost = val;
}

void			FragTrap::setLvl(int val)
{
	this->_lvl = val;
}

void			FragTrap::setName(std::string val)
{
	this->_name = val;
}

void			FragTrap::setMeleeAttckDmg(int val)
{
	this->_meleeAttckDmg = val;
}

void			FragTrap::setRangedAttckDmg(int val)
{
	this->_rangedAttckDmg = val;
}

void			FragTrap::setArmorDmgReduction(int val)
{
	this->_armorDmgReduction = val;
}
