/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 13:53:03 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/12 16:56:25 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{

	private:
		std::string		_target;

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm &		operator=(ShrubberyCreationForm const & rhs);
		std::string					getTarget(void) const
		void						virtual execute(Bureaucratconst & executor) const;

};

#endif
