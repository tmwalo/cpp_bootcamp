/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:00:54 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/08 18:14:24 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include <iostream>

class ScavTrap
{

	private:
		int 						_hitPts;
		int							_maxHitPts;
		int							_energyPts;
		int							_maxEnergyPts;
		int							_lvl;
		std::string					_name;
		int							_meleeAttckDmg;
		int							_rangedAttckDmg;
		static const std::string	_pieEating;
		static const std::string	_rockPaperScissor;
		static const std::string	_staring;
		static const std::string	_dance;
		static const std::string	_singing;
		int							_armorDmgReduction;

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);
		ScavTrap &		operator=(ScavTrap const & rhs);
		void			meleeAttack(std::string const & target);
		void			rangedAttack(std::string const & target);
		void			pieEating(std::string const & target);
		void			rockPaperScissor(std::string const & target);
		void			staring(std::string const & target);
		void			dance(std::string const & target);
		void			singing(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer(std::string const & target);
		int				getHitPts(void) const;
		int				getMaxHitPts(void) const;
		int				getEnergyPts(void) const;
		int				getMaxEnergyPts(void) const;
		int				getLvl(void) const;
		std::string		getName(void) const;
		int				getMeleeAttckDmg(void) const;
		int				getRangedAttckDmg(void) const;
		int				getArmorDmgReduction(void) const;
		void			setHitPts(int val);
		void			setMaxHitPts(int val);
		void			setEnergyPts(int val);
		void			setMaxEnergyPts(int val);
		void			setLvl(int val);
		void			setName(std::string val);
		void			setMeleeAttckDmg(int val);
		void			setRangedAttckDmg(int val);
		void			setArmorDmgReduction(int val);

};

#endif
