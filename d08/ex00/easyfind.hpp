/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 08:03:19 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/15 08:03:41 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H
# include <algorithm>

template<typename T>
int		easyfind(T & container, int search_val)
{
	typename T::iterator	iter;

	iter = find(container.begin(), container.end(), search_val);
	if (iter == container.end())
		throw std::exception();
	return (*iter);
}

#endif
