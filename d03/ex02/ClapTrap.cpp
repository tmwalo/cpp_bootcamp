/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 17:20:22 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/08 17:48:32 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPts(100),
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

ClapTrap::ClapTrap(std::string name) : _hitPts(100),
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

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Default destructor called" << std::endl;
	return ;
}

ClapTrap &		ClapTrap::operator=(ClapTrap const & rhs)
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

void			ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << this->getName() << " attacks " << target << " at melee range, causing " << this->getMeleeAttckDmg() << " points of damage" << std::endl;
	return ;
}

void			ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << this->getName() << " attacks " << target << " at range, causing " << this->getRangedAttckDmg() << " points of damage" << std::endl;
	return ;
}

void			ClapTrap::takeDamage(unsigned int amount)
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

void			ClapTrap::beRepaired(unsigned int amount)
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

int				ClapTrap::getHitPts(void) const
{
	return (this->_hitPts);
}

int				ClapTrap::getMaxHitPts(void) const
{
	return (this->_maxHitPts);
}

int				ClapTrap::getEnergyPts(void) const
{
	return (this->_energyPts);
}

int				ClapTrap::getMaxEnergyPts(void) const
{
	return (this->_maxEnergyPts);
}

int				ClapTrap::getLvl(void) const
{
	return (this->_lvl);
}

std::string		ClapTrap::getName(void) const
{
	return (this->_name);
}

int				ClapTrap::getMeleeAttckDmg(void) const
{
	return (this->_meleeAttckDmg);
}

int				ClapTrap::getRangedAttckDmg(void) const
{
	return (this->_rangedAttckDmg);
}

int				ClapTrap::getArmorDmgReduction(void) const
{
	return (this->_armorDmgReduction);
}

void			ClapTrap::setHitPts(int val)
{
	this->_hitPts = val;
}

void			ClapTrap::setMaxHitPts(int val)
{
	this->_maxHitPts = val;
}

void			ClapTrap::setEnergyPts(int val)
{
	this->_energyPts = val;
}

void			ClapTrap::setMaxEnergyPts(int val)
{
	this->_maxEnergyPts = val;
}

void			ClapTrap::setSpecialAttckCost(int val)
{
	this->_specialAttckCost = val;
}

void			ClapTrap::setLvl(int val)
{
	this->_lvl = val;
}

void			ClapTrap::setName(std::string val)
{
	this->_name = val;
}

void			ClapTrap::setMeleeAttckDmg(int val)
{
	this->_meleeAttckDmg = val;
}

void			ClapTrap::setRangedAttckDmg(int val)
{
	this->_rangedAttckDmg = val;
}

void			ClapTrap::setArmorDmgReduction(int val)
{
	this->_armorDmgReduction = val;
}
