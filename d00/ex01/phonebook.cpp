/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 16:52:17 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/05 18:16:52 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

int		main(void)
{
	std::string		input;
	Contact			phonebook[8];
	int				contacts;
	std::string		firstName;
	std::string		lastName;
	std::string		nickname;
	std::string		login;
	std::string		postalAddress;
	std::string		emailAddress;
	std::string		phoneNumber;
	std::string		birthdayDate;
	std::string		favoriteMeal;
	std::string		underwearColor;
	std::string		darkestSecret;
	
	contacts = 0;
	while (1)
	{
		std::cout << "Please enter a command: ";
		std::getline(std::cin, input);
		if (input.compare("ADD"))
		{
			std::cout << "Please enter first name: ";
			std::getline(std::cin, input);
			firstName = input;

			std::cout << "Please enter last name: ";
			std::getline(std::cin, input);
			lastName = input;

			std::cout << "Please enter nickname: ";
			std::getline(std::cin, input);
			nickname = input;

			std::cout << "Please enter login: ";
			std::getline(std::cin, input);
			login = input;

			std::cout << "Please enter postal address: ";
			std::getline(std::cin, input);
			postalAddress = input;

			std::cout << "Please enter email address: ";
			std::getline(std::cin, input);
			emailAddress = input;

			std::cout << "Please enter phone number: ";
			std::getline(std::cin, input);
			phoneNumber = input;

			std::cout << "Please enter birthday date: ";
			std::getline(std::cin, input);
			birthdayDate = input;

			std::cout << "Please enter favorite meal: ";
			std::getline(std::cin, input);
			favoriteMeal = input;

			std::cout << "Please enter underwear color: ";
			std::getline(std::cin, input);
			underwearColor = input;

			std::cout << "Please enter darkest secret: ";
			std::getline(std::cin, input);
			darkestSecret = input;

			if (contacts < 8)
			{
				Contact		addContact(firstName, lastName, nickname, login, postalAddress, emailAddress, phoneNumber, birthdayDate, favoriteMeal, underwearColor, darkestSecret);
				
				++contacts;
				phonebook[contacts - 1] = addContact;
			}
			else
				std::cout << "Phonebook is full, you can't add more contacts" << std::endl;
		}
		else if (input.compare("SEARCH"))
		{
		
		}
		else if (input.compare("EXIT"))
			break ;
	}
	return (0);
}
