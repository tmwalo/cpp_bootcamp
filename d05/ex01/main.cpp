/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 08:46:14 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/12 12:54:04 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int		main(void)
{
	Bureaucrat		blesser1;
	Bureaucrat		blesser2("honourable member", 150);
	Bureaucrat		blesser3("miracle", 1);
	Bureaucrat		blesser4i(blesser2);
	Bureaucrat		blesser5;
	Bureaucrat		blesser6("slu leka lee", 37);

	/* Bureaucrat Tests */

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

	std::cout << std::endl;

	/* Form Tests */

	Form			form1;
	Form			passport("get passport", 50, 100);
	Form			form3(passport);
	Form			form4;
	Bureaucrat		SigneeLowGrade("Cooldrink", 80);
	Bureaucrat		SigneeHighGrade("Sbu", 10);

	try
	{
		Form		gradeToSignHigh("test", 0, 100);
	}
	catch (std::exception & e)
	{
		std::cout << "grade to sign too high: " << e.what() << std::endl;
	}

	try
	{
		Form		gradeToSignLow("test", 500, 100);
	}
	catch (std::exception & e)
	{
		std::cout << "grade to sign too low: " << e.what() << std::endl;
	}

	try
	{
		Form		gradeToExecHigh("test", 50, 0);
	}
	catch (std::exception & e)
	{
		std::cout << "grade to exec too high: " << e.what() << std::endl;
	}

	try
	{
		Form		gradeToExecLow("test", 50, 1000);
	}
	catch (std::exception & e)
	{
		std::cout << "grade to exec too low: " << e.what() << std::endl;
	}

	try
	{
		passport.beSigned(SigneeLowGrade);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		std::cout << passport << std::endl;
		std::cout << SigneeLowGrade << std::endl;
	}

	try
	{
		SigneeLowGrade.signForm(passport.getName(), passport.getSigned());
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		passport.beSigned(SigneeHighGrade);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		SigneeHighGrade.signForm(passport.getName(), passport.getSigned());
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
