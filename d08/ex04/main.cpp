/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 18:16:03 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/15 18:31:21 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>

int		main(int argc, char **argv)
{
	std::string		expression;
	int				index;
	stack<int>		nums;
	stack<char>		ops;

	expression = argv[0];
	index = 0;
	while (index < expression.size())
	{
		if (expression[index] == ' ')
		{
			++index;
			continue;
		}
		if (isdigit(expression[index]))
			nums.push();
		++index;
	}
	return (0);
}
