/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 07:54:34 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/14 07:54:46 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int		main(void)
{
	Array<int>				intArr1;
	Array<int>				intArr2(5);
	Array<int>				intArr3(intArr2);
	Array<int>				intArr4;
	Array<int>				intArr5;
	Array<int>				intArr6(2);

	std::cout << "intArr1 : " << intArr1 << std::endl;
	std::cout << "intArr2 : " << intArr2 << std::endl;
	std::cout << "intArr3 : " << intArr3 << std::endl;

	intArr2[0] = -3;
	intArr2[1] = 77;
	intArr2[2] = 96;
	intArr2[3] = -40;
	intArr2[4] = 5;
	std::cout << "intArr2 after []op : " << intArr2 << std::endl;

	std::cout << "intArr4 : " << intArr4 << std::endl;
	intArr4 = intArr2;
	std::cout << "intArr4 after intArr6 assignation : " << intArr4 << std::endl;

	std::cout << "intArr5 : " << intArr5 << std::endl;
	intArr5 = intArr5;
	std::cout << "intArr5 after self assignation : " << intArr5 << std::endl;

	intArr6[0] = -38;
	intArr6[1] = 21;
	std::cout << "intArr6 : " << intArr6 << std::endl;
	intArr2 = intArr6;
	std::cout << "intArr2 after intArr6 assignation : " << intArr2 << std::endl;

	try
	{
		intArr6[1000] = 9000;
	}
	catch (std::exception e)
	{
		std::cout << "caught out of range exception" << std::endl;
	}
	
	std::cout << std::endl;

	Array<std::string>		strArr1;
	Array<std::string>		strArr2(5);
	Array<std::string>		strArr3(strArr2);
	Array<std::string>		strArr4;
	Array<std::string>		strArr5;
	Array<std::string>		strArr6(2);

	std::cout << "strArr1 : " << strArr1 << std::endl;
	std::cout << "strArr2 : " << strArr2 << std::endl;
	std::cout << "strArr3 : " << strArr3 << std::endl;

	strArr2[0] = "face the mighty bison";
	strArr2[1] = "upon the clouds";
	strArr2[2] = "a face";
	strArr2[3] = "vendetta";
	strArr2[4] = "shuffle";
	std::cout << "strArr2 after []op : " << strArr2 << std::endl;

	std::cout << "strArr4 : " << strArr4 << std::endl;
	strArr4 = strArr2;
	std::cout << "strArr4 after strArr6 assignation : " << strArr4 << std::endl;

	std::cout << "strArr5 : " << strArr5 << std::endl;
	strArr5 = strArr5;
	std::cout << "strArr5 after self assignation : " << strArr5 << std::endl;

	strArr6[0] = "heavenly demon";
	strArr6[1] = "supreme";
	std::cout << "strArr6 : " << strArr6 << std::endl;
	strArr2 = strArr6;
	std::cout << "strArr2 after strArr6 assignation : " << strArr2 << std::endl;
	
	try
	{
		strArr6[1000] = "the drums of war unify";
	}
	catch (std::exception e)
	{
		std::cout << "caught out of range exception" << std::endl;
	}

	return (0);
}
