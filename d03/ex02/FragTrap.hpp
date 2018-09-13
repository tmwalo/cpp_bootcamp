/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 09:49:58 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/08 18:30:19 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	private:
		int							_specialAttckCost;
		static const unsigned int	_neverEspededAttckDmg;
		static const unsigned int	_deadlyDayAttckDmg;
		static const unsigned int	_deWayAttckDmg;
		static const unsigned int	_hadoKenAttckDmg;
		static const unsigned int	_finishHimAttckDmg;

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);
		FragTrap &		operator=(FragTrap const & rhs);
		void			neverEspededAttack(std::string const & target);
		void			deadlyDayAttack(std::string const & target);
		void			deWayAttack(std::string const & target);
		void			hadoKenAttack(std::string const & target);
		void			finishHimAttack(std::string const & target);
		void			vaulthunter_dot_exe(std::string const & target);
		int				getSpecialAttckCost(void) const;
		void			setSpecialAttckCost(int val);

};

#endif
