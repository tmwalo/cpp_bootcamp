/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 09:49:58 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/08 15:22:39 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <iostream>

class FragTrap
{

	private:
		int 						_hitPts;
		int							_maxHitPts;
		int							_energyPts;
		int							_maxEnergyPts;
		int							_specialAttckCost;
		int							_lvl;
		std::string					_name;
		int							_meleeAttckDmg;
		int							_rangedAttckDmg;
		static const unsigned int	_neverEspededAttckDmg;
		static const unsigned int	_deadlyDayAttckDmg;
		static const unsigned int	_deWayAttckDmg;
		static const unsigned int	_hadoKenAttckDmg;
		static const unsigned int	_finishHimAttckDmg;
		int							_armorDmgReduction;

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);
		FragTrap &		operator=(FragTrap const & rhs);
		void			meleeAttack(std::string const & target);
		void			rangedAttack(std::string const & target);
		void			neverEspededAttack(std::string const & target);
		void			deadlyDayAttack(std::string const & target);
		void			deWayAttack(std::string const & target);
		void			hadoKenAttack(std::string const & target);
		void			finishHimAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const & target);
		int				getHitPts(void) const;
		int				getMaxHitPts(void) const;
		int				getEnergyPts(void) const;
		int				getMaxEnergyPts(void) const;
		int				getSpecialAttckCost(void) const;
		int				getLvl(void) const;
		std::string		getName(void) const;
		int				getMeleeAttckDmg(void) const;
		int				getRangedAttckDmg(void) const;
		int				getArmorDmgReduction(void) const;
		void			setHitPts(int val);
		void			setMaxHitPts(int val);
		void			setEnergyPts(int val);
		void			setMaxEnergyPts(int val);
		void			setSpecialAttckCost(int val);
		void			setLvl(int val);
		void			setName(std::string val);
		void			setMeleeAttckDmg(int val);
		void			setRangedAttckDmg(int val);
		void			setArmorDmgReduction(int val);

};

#endif
