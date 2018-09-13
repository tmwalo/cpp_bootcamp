/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:00:54 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/08 18:30:12 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap
{

	private:
		static const std::string	_pieEating;
		static const std::string	_rockPaperScissor;
		static const std::string	_staring;
		static const std::string	_dance;
		static const std::string	_singing;

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);
		ScavTrap &		operator=(ScavTrap const & rhs);
		void			pieEating(std::string const & target);
		void			rockPaperScissor(std::string const & target);
		void			staring(std::string const & target);
		void			dance(std::string const & target);
		void			singing(std::string const & target);
		void			challengeNewcomer(std::string const & target);

};

#endif
