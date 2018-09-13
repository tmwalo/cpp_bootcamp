/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:22:54 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/08 18:27:14 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	FragTrap	player("7thWave");
	FragTrap	nameless_player;
	ScavTrap	ranker("jahad");
	ScavTrap	regular;

	player.rangedAttack("enemy1");
	nameless_player.rangedAttack("enemy1");

	ranker.rangedAttack("enemy1");
	regular.rangedAttack("enemy1");

	player.meleeAttack("enemy2");
	nameless_player.meleeAttack("enemy2");

	ranker.meleeAttack("enemy2");
	regular.meleeAttack("enemy2");

	player.takeDamage(30);
	ranker.takeDamage(30);

	player.beRepaired(10);
	ranker.beRepaired(10);

	player.takeDamage(2000);
	ranker.takeDamage(2000);

	player.beRepaired(1000);
	ranker.beRepaired(1000);

	player.vaulthunter_dot_exe("boss");
	ranker.challengeNewcomer("player");

	return (0);
}
