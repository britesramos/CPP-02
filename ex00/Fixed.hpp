/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/20 19:10:42 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/20 19:35:03 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	private:
		int	value;
		static const int bits;

	public:
		Fixed();
		~Fixed();
		int	getRawBits () const;
		void setRawBits (int const raw);
};

