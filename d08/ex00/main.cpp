/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 08:03:46 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/15 08:03:53 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int		main(void)
{
	std::vector<int>	v;

	v.push_back(11);
	v.push_back(6);
	v.push_back(3);
	v.push_back(89);
	v.push_back(-7);

	std::cout << "easyfind with vector" << std::endl;
	std::cout << easyfind(v, 3) << std::endl;
	std::cout << easyfind(v, -7) << std::endl;
	try
	{
		easyfind(v, 9000);
	}
	catch (std::exception e)
	{
		std::cout << "easyfind exception caught" << std::endl;
	}
	
	std::list<int>		ll;

	ll.push_back(11);
	ll.push_back(6);
	ll.push_back(3);
	ll.push_back(89);
	ll.push_back(-7);

	std::cout << std::endl;
	std::cout << "easyfind with linked list" << std::endl;
	std::cout << easyfind(ll, 3) << std::endl;
	std::cout << easyfind(ll, -7) << std::endl;
	try
	{
		easyfind(v, 9000);
	}
	catch (std::exception e)
	{
		std::cout << "easyfind exception caught" << std::endl;
	}

	return (0);
}
