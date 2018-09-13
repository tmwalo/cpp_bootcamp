/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 11:08:50 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/15 17:40:28 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H
# include <vector>

template<typename T>
class MutantStack
{

	private:
		std::vector<int>		_elements;

	public:
		MutantStack(void);
		MutantStack(MutantStack const & src);
		~MutantStack(void);
		MutantStack<T> &	operator=(MutantStack const & rhs);
		std::vector<int> &	getElements(void);

		typedef std::vector<int>	*iterator;
		iterator		begin()
		{
			return ((this->_elements).begin());
		}
		iterator		end()
		{
			return ((this->_elements).end());
		}

		bool	empty() const
		{
			return ((this->_elements).empty());
		}

		size_type	size() const
		{
			return ((this->_elements).size());
		}

		int		top() const
		{
			return ((this->_elements)[(this->_elements).size() - 1]);
		}

		int		push()
		{
			return ((this->_elements)[(this->_elements).size() - 1]);
		}
};

template<typename T>
MutantStack<T>::MutantStack(void)
{
	return ;
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const & src)
{
	*this = src;
	return ;
}

template<typename T>
MutantStack<T>::~MutantStack(void)
{
	return ;
}

template<typename T>
MutantStack<T> &		MutantStack<T>::operator=(MutantStack const & rhs)
{
	(this->_elements).assign(rhs.getElements());
	return (*this);
}

std::vector<int> &		MutantStack<T>::getElements()
{
	return (this->_elements);
}

#endif
