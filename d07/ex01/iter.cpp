/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 14:29:16 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/13 16:21:28 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	iter(T *pt, unsigned int len, void(*f)(T const & element))
{
	unsigned int	index;

	index = 0;
	while (index < len)
	{
		f(pt[index]);
		++index;
	}
}

template <typename T>
void	incr(T const val)
{
	std::cout << val << std::endl;
}

int		main(void)
{
	int				nums[3] = {7, 19, 33};
	std::string		irregulars[5] = {"Jahad", "Urek", "Gustang", "Enryu", "The 25th Night"};

	iter(nums, 3, incr);
	iter(irregulars, 5, incr);

	return (0);
}
