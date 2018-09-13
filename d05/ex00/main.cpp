/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 08:45:04 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/12 08:45:14 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int		main(void)
{
	Bureaucrat		blesser1;
	Bureaucrat		blesser2("honourable member", 150);
	Bureaucrat		blesser3("miracle", 1);
	Bureaucrat		blesser4i(blesser2);
	Bureaucrat		blesser5;
	Bureaucrat		blesser6("slu leka lee", 37);

	blesser5 = blesser2;

	std::cout << "init - " << blesser6 << std::endl;
	blesser6.decrementGrade();
	std::cout << "after decrement - " << blesser6 << std::endl;
	blesser6.incrementGrade();
	std::cout << "after increment - " << blesser6 << std::endl;
	
	try
	{
		Bureaucrat		blesser7("spykos", 9000);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		blesser2.decrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << " - " << blesser2 << std::endl;
	}
	
	try
	{
		blesser3.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << " - " << blesser3 << std::endl;
	}

	return (0);
}
