/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 14:05:58 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/12 16:59:56 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H
# include "Form.hpp"

class PresidentialPardonForm : public Form
{

	private:
		std::string		_target;

	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		~PresidentialPardonForm(void);
		PresidentialPardonForm &	operator=(PresidentialPardonForm const & rhs);
		std::string					getTarget(void) const
		void						virtual execute(Bureaucratconst & executor) const;

};

#endif
