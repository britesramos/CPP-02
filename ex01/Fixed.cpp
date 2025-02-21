/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/20 19:11:16 by sramos        #+#    #+#                 */
/*   Updated: 2025/02/21 17:04:52 by sramos        ########   odam.nl         */
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
		this->value = this->getRawBits();
	}
	return (*this);
}

Fixed& Fixed::operator<<(const Fixed& fixed){

}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int){

}

Fixed::Fixed(const float){

}

int	Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float Fixed::toFoalt() const{

}

int Fixed::toInt() const{

}