/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/20 19:10:42 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/17 15:31:23 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>

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
		~Fixed();

		Fixed(const int int_convert);
		Fixed(const float float_convert);

		int	getRawBits () const;
		void setRawBits (int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

	std::ostream& operator<<(std::ostream& out, const Fixed& fixed);