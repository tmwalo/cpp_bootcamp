/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 14:46:08 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/05 17:56:46 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>
class Contact
{

	private:

		std::string		_firstName;
		std::string 	_lastName;
		std::string 	_nickname;
		std::string 	_login;
		std::string 	_postalAddress;
		std::string 	_emailAddress;
		std::string 	_phoneNumber;
		std::string 	_birthdayDate;
		std::string 	_favoriteMeal;
		std::string 	_underwearColor;
		std::string 	_darkestSecret;

	public:

		Contact(std::string firstName, std::string lastName, std::string nickname, std::string login, std::string postalAddress,
				std::string emailAddress, std::string phoneNumber, std::string birthdayDate, std::string favoriteMeal,
				std::string underwearColor, std::string darkestSecret);
		std::string		getFirstName(void) const;
		std::string 	getLastName(void) const;
		std::string 	getNickname(void) const;
		std::string 	getLogin(void) const;
		std::string 	getPostalAddress(void) const;
		std::string 	getEmailAddress(void) const;
		std::string 	getPhoneNumber(void) const;
		std::string 	getBirthdayDate(void) const;
		std::string 	getFavoriteMeal(void) const;
		std::string 	getUnderwearColor(void) const;
		std::string 	getDarkestSecret(void) const;
		void 			setFirstName(std::string value);
		void 			setLastName(std::string value);
		void 			setNickname(std::string value);
		void 			setLogin(std::string value);
		void 			setPostalAddress(std::string value);
		void 			setEmailAddress(std::string value);
		void 			setPhoneNumber(std::string value);
		void 			setBirthdayDate(std::string value);
		void 			setFavoriteMeal(std::string value);
		void 			setUnderwearColor(std::string value);
		void 			setDarkestSecret(std::string value);

};

#endif
