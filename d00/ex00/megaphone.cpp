/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 11:27:18 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/05 12:35:51 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char **argv)
{
	int arg_index;
	int char_index;

	arg_index = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	while (arg_index < argc)
	{
		char_index = 0;
		while (argv[arg_index][char_index] != '\0')
		{
			if (std::islower(argv[arg_index][char_index]))
				argv[arg_index][char_index] = std::toupper(argv[arg_index][char_index]);
			std::cout << argv[arg_index][char_index];
			++char_index;
		}
		++arg_index;
		if (arg_index == argc)
			std::cout << std::endl;
	}
	return (0);
}
