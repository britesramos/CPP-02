/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/20 19:11:16 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/24 17:55:35 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed): value(fixed.value){
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed& Fixed::operator=(const Fixed& fixed){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed){
		this->setRawBits(fixed.getRawBits());
	}
	return (*this);
}

std::ostream& operator<<(std:: ostream& out, const Fixed& fixed){
	out << fixed.toFloat();
	return (out);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int int_convert){
	std::cout << "Int constructor called" << std::endl;
	this->value = int_convert << this->bits; //It bit shifts x amount of bits to the left.
}

Fixed::Fixed(const float float_convert){
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(float_convert * (1 << this->bits));
}

int	Fixed::getRawBits() const{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw){
	this->value = raw;
}

float Fixed::toFloat() const{
	return (static_cast<float>(this->value) / (1 << this->bits));
}

int Fixed::toInt() const{
	return (this->value >> this->bits);
}