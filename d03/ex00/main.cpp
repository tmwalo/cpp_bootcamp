/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:22:54 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/08 15:48:02 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	player("7thWave");
	FragTrap	nameless_player;

	player.rangedAttack("enemy1");
	nameless_player.rangedAttack("enemy1");

	player.meleeAttack("enemy2");
	nameless_player.meleeAttack("enemy2");

	player.takeDamage(30);

	player.beRepaired(10);

	player.takeDamage(2000);

	player.beRepaired(1000);

	player.vaulthunter_dot_exe("boss");

	return (0);
}
