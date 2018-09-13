/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 11:09:17 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/15 16:11:29 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

MutantStack::MutantStack(void)
{
	return ;
}

MutantStack::MutantStack(MutantStack const & src)
{
	*this = src;
	return ;
}

MutantStack::~MutantStack(void)
{
	return ;
}

MutantStack &		MutantStack::operator=(MutantStack const & rhs)
{

	return (*this);
}
