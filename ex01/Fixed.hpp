/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/20 19:10:42 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/21 17:04:26 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#pragma once

class Fixed
{
	private:
		int	value;
		static const int bits = 8;

	public:
		Fixed();
		Fixed(const Fixed& fixed);
		Fixed& operator=(const Fixed& fixed);
		Fixed& operator<<(const Fixed& fixed);
		~Fixed();

		Fixed(const int);
		Fixed(const float);

		int	getRawBits () const;
		void setRawBits (int const raw);
		float toFoalt(void) const;
		int toInt(void) const;
};

//Add missing function.
