/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 08:07:20 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/15 09:38:13 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) : _maxSize(0)
{
	return ;
}

Span::Span(unsigned int max) : _maxSize(max)
{
	return ;
}

Span::Span(Span const & src)
{
	*this = src;
	return ;
}

Span::~Span(void)
{
	return ;
}

Span &		Span::operator=(Span const & rhs)
{
	this->_maxSize = rhs.getMaxSize();
	(this->_nums).assign((rhs.getNums()).begin(), (rhs.getNums()).end());
	return (*this);
}

std::vector<int>	Span::getNums(void) const
{
	return (this->_nums);
}

unsigned int		Span::getMaxSize(void) const
{
	return (this->_maxSize);
}

void				Span::setNums(std::vector<int> val)
{
	this->_nums = val;
	return ;
}

void				Span::setMaxSize(unsigned int val)
{
	this->_maxSize = val;
	return ;
}

void				Span::addNumber(int num)
{
	if ((this->_nums).size() < this->getMaxSize())
		(this->_nums).push_back(num);
	else
		throw std::exception();
}

int					Span::shortestSpan(void)
{
	int		span;

	if ((this->_nums).size() < 2)
		throw std::exception();
	std::sort((this->_nums).begin(), (this->_nums).end());
	span = (this->_nums)[0] - (this->_nums)[1];
	if (span < 0)
		span = (-1) * span;
	return (span);
}

int					Span::longestSpan(void)
{
	int		span;

	if ((this->_nums).size() < 2)
		throw std::exception();
	std::sort((this->_nums).begin(), (this->_nums).end());
	span = (this->_nums)[0] - (this->_nums)[(this->_nums).size() - 1];
	if (span < 0)
		span = (-1) * span;
	return (span);
}
