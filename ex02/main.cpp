/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/21 16:49:55 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/17 15:43:41 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "----------------Extra Tests----------------" << std::endl;

	Fixed c(10);
	Fixed const d(2);

	std::cout << d + c << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << d / c << std::endl;
	if (c == d)
		std::cout << "C equal to D" << std::endl;
	if (c != d)
		std::cout << "C is not equal to D" << std::endl;
	if (c > d)
		std::cout << "C is bigger than D" << std::endl;
	if (c < d)
		std::cout << "C is smaller than D" << std::endl;
	if (c >= d)
		std::cout << "C is bigger or equal to D" << std::endl;
	if (c <= d)
		std::cout << "C is smaller or equal to D" << std::endl;
	std::cout << Fixed::min(c, d) << std::endl;
	std::cout << --c << std::endl;
	std::cout << c << std::endl;
	std::cout << c-- << std::endl;
	std::cout << c << std::endl;
	std::cout << c * d << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	

	return 0;
}
