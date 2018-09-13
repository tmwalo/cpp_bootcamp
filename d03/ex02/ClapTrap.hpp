/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 17:19:25 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/08 17:49:22 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap
{

	protected:
		int 						_hitPts;
		int							_maxHitPts;
		int							_energyPts;
		int							_maxEnergyPts;
		int							_lvl;
		std::string					_name;
		int							_meleeAttckDmg;
		int							_rangedAttckDmg;
		int							_armorDmgReduction;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);
		ClapTrap &		operator=(ClapTrap const & rhs);
		void			meleeAttack(std::string const & target);
		void			rangedAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
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
