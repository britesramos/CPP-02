/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/20 19:10:42 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/24 19:34:21 by sramos        ########   odam.nl         */
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

		Fixed operator+(const Fixed& fixed)const;
		Fixed operator-(const Fixed& fixed)const;
		Fixed operator*(const Fixed& fixed)const;
		Fixed operator/(const Fixed& fixed)const;

		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		bool operator>(const Fixed& to_cmp);
		bool operator<(const Fixed& to_cmp);
		bool operator==(const Fixed& to_cmp);
		bool operator>=(const Fixed& to_cmp);
		bool operator<=(const Fixed& to_cmp);
		bool operator!=(const Fixed& to_cmp);		

		static const Fixed& min(Fixed& ref_one, Fixed& ref_two);
		static const Fixed& max(Fixed& ref_one, Fixed& ref_two);
		static const Fixed& min(const Fixed& ref_one, const Fixed& ref_two);
		static const Fixed& max(const Fixed& ref_one, const Fixed& ref_two);
};

	std::ostream& operator<<(std::ostream& out, const Fixed& fixed);