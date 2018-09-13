/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 08:08:15 by tmwalo            #+#    #+#             */
/*   Updated: 2018/06/15 08:08:45 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H
# include <vector>

class Span
{

	private:
		std::vector<int>	_nums;
		unsigned int		_maxSize;

	public:
		Span(void);
		Span(unsigned int N);
		Span(Span const & src);
		~Span(void);
		Span &				operator=(Span const & rhs);
		void				addNumber(int num);
		std::vector<int>	getNums(void) const;
		void				setNums(std::vector<int> nums);
		unsigned int		getMaxSize(void) const;
		void				setMaxSize(unsigned int max);
		int					shortestSpan(void);
		int					longestSpan(void);

};

#endif
