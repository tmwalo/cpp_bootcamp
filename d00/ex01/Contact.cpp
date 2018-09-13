/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 15:09:34 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/05 18:18:35 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string login, std::string postalAddress,
				std::string emailAddress, std::string phoneNumber, std::string birthdayDate, std::string favoriteMeal,
				std::string underwearColor, std::string darkestSecret) :
				_firstName(firstName), _lastName(lastName), _nickname(nickname), _login(login), _postalAddress(postalAddress),
				_emailAddress(emailAddress), _phoneNumber(phoneNumber), _birthdayDate(birthdayDate), _favoriteMeal(favoriteMeal),
				_underwearColor(underwearColor), _darkestSecret(darkestSecret)
{
	return ;
}

std::string		Contact::getFirstName() const
{
	return (this->_firstName);
}

std::string		Contact::getLastName() const
{
	return (this->_lastName);
}

std::string		Contact::getNickname() const
{
	return (this->_nickname);
}

std::string		Contact::getLogin() const
{
	return (this->_login);
}

std::string		Contact::getPostalAddress() const
{
	return (this->_postalAddress);
}

std::string		Contact::getEmailAddress() const
{
	return (this->_emailAddress);
}

std::string		Contact::getPhoneNumber() const
{
	return (this->_phoneNumber);
}

std::string		Contact::getBirthdayDate() const
{
	return (this->_birthdayDate);
}

std::string		Contact::getFavoriteMeal() const
{
	return (this->_favoriteMeal);
}

std::string		Contact::getUnderwearColor() const
{
	return (this->_underwearColor);
}

std::string		Contact::getDarkestSecret() const
{
	return (this->_darkestSecret);
}

void		Contact::setFirstName(std::string value)
{
	this->_firstName = value;
}

void		Contact::setLastName(std::string value)
{
	this->_lastName = value;
}

void		Contact::setNickname(std::string value)
{
	this->_nickname = value;
}

void		Contact::setLogin(std::string value)
{
	this->_login = value;
}

void		Contact::setPostalAddress(std::string value)
{
	this->_postalAddress = value;
}

void		Contact::setEmailAddress(std::string value)
{
	this->_emailAddress = value;
}

void		Contact::setPhoneNumber(std::string value)
{
	this->_phoneNumber = value;
}

void		Contact::setBirthdayDate(std::string value)
{
	this->_birthdayDate = value;
}

void		Contact::setFavoriteMeal(std::string value)
{
	this->_favoriteMeal = value;
}

void		Contact::setUnderwearColor(std::string value)
{
	this->_underwearColor = value;
}

void		Contact::setDarkestSecret(std::string value)
{
	this->_darkestSecret = value;
}
