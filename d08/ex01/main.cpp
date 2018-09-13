/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 08:07:00 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/15 09:57:34 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <vector>

int		main(void)
{
	Span							span1;
	Span							span2(5);
	Span							span3(span2);
	Span							span4;
	Span							span5(3);
	Span							span6(1);
	Span							large(12000);
	std::vector<int>::iterator		iter;
	int								index;

	span4 = span2;

	span2.addNumber(33);
	span2.addNumber(-100);
	span2.addNumber(6);
	span2.addNumber(13);
	span2.addNumber(-21);

	index = 0;
	iter = span2.getNums().begin();
	std::cout << "span2: ";
	while (index < 5)
	{
		std::cout << *iter << " ";
		++iter;
		++index;
	}
	std::cout << std::endl;

	try
	{
		span2.addNumber(9000);
	}
	catch (std::exception e)
	{
		std::cout << "caught exception when trying to add more numbers than max size" << std::endl;
	}

	span5.addNumber(3);
	span5.addNumber(8);
	span5.addNumber(17);

	index = 0;
	iter = span5.getNums().begin();
	std::cout << "span5: ";
	while (index < 3)
	{
		std::cout << *iter << " ";
		++iter;
		++index;
	}
	std::cout << std::endl;

	std::cout << "shortest span for span5: " << span5.shortestSpan() << std::endl;

	std::cout << "longest span for span5: " << span5.longestSpan() << std::endl;

	span6.addNumber(13);

	try
	{
		span6.shortestSpan();
	}
	catch (std::exception e)
	{
		std::cout << "caught exception when trying calc shortest span for Span with 1 int" << std::endl;
	}

	index = 0;
	while (index < 12000)
	{
		large.addNumber(index + 1);
		++index;
	}

	index = 0;
	iter = large.getNums().begin();
	std::cout << "large: first 20 values - ";
	while (index < 20)
	{
		std::cout << *iter << " ";
		++iter;
		++index;
	}
	std::cout << "..." << std::endl;

	index = 11979;
	iter = large.getNums().begin() + 11979;
	std::cout << "large: last 20 values - ...";
	while (index < 12000)
	{
		std::cout << *iter << " ";
		++iter;
		++index;
	}
	std::cout << std::endl;

	std::cout << "shortest span for large: " << large.shortestSpan() << std::endl;

	std::cout << "longest span for large: " << large.longestSpan() << std::endl;

	return (0);
}
