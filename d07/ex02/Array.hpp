/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 17:08:14 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/14 08:02:00 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H
#include <iostream>

template <typename T>
class Array
{

	private:
		unsigned int	_size;
		T				*_ptArray;

	public:
		Array(void);
		Array(unsigned int size);
		Array(Array const & src);
		~Array(void);
		Array<T> &		operator=(Array const & rhs);
		T &				operator[](unsigned int index);
		unsigned int	size(void) const;
		T				*getPtArray(void) const;

};

template <typename T>
Array<T>::Array(void) : _size(0), _ptArray(0)
{
	return ;
}

template <typename T>
Array<T>::Array(unsigned int size) : _size(size)
{
	this->_ptArray = new T[this->size()];
	return ;
}

template <typename T>
Array<T>::Array(Array const & src) : _size(src.size())
{
	unsigned int	index;

	this->_ptArray = new T[this->size()];
	index = 0;
	while (index < (this->size()))
	{
		(this->_ptArray)[index] = (src.getPtArray())[index];
		++index;
	}
	return ;
}

template <typename T>
Array<T>::~Array(void)
{
	delete [] this->_ptArray;
	return ;
}

template <typename T>
Array<T> &		Array<T>::operator=(Array const & rhs)
{
	unsigned int	index;

	if (this != (&rhs))
	{
		if (this->size() != rhs.size())
		{
			delete [] this->_ptArray;
			this->_size = rhs.size();
			this->_ptArray = new T[this->size()];
		}
		index = 0;
		while (index < (this->size()))
		{
			(this->_ptArray)[index] = (rhs.getPtArray())[index];
			++index;
		}
	}
	return (*this);
}

template <typename T>
T &				Array<T>::operator[](unsigned int index)
{
	if (index >= this->size())
		throw std::exception();
	return ((this->getPtArray())[index]);
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->_size);
}

template <typename T>
T				*Array<T>::getPtArray(void) const
{
	return (this->_ptArray);
}

template <typename T>
std::ostream &		operator<<(std::ostream & out, Array<T> const & rhs)
{
	unsigned int	index;

	index = 0;
	out << "| ";
	while (index < rhs.size())
	{
		out << (rhs.getPtArray())[index] << " | ";
		++index;
	}
	return (out);
}

#endif
