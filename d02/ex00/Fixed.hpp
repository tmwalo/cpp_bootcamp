/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 09:45:59 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/07 11:21:57 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class	Fixed
{

	private:
		int					_val;
		static const int	_ptPos;

	public:
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);
		Fixed &		operator=(Fixed const & rhs);
		int			getRawBits(void) const;
		void		setRawsBits(int const raw);

};

#endif
