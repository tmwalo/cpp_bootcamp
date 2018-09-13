/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 16:02:35 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/15 16:15:59 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int		main(void)
{
	MutantStack<int>	stck1;
	MutantStack<int>	stck2(stck1);
	MutantStack<int>	stck3;
	MutantStack<int>	stck4;
	MutantStack<int>	stck5;

	stck3 = stck2;

	return (0);
}
