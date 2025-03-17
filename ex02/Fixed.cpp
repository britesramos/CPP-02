/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/20 19:11:16 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/17 13:50:21 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): value(0){
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed): value(fixed.value){
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed& Fixed::operator=(const Fixed& fixed){
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed){
		this->value = fixed.value;
	}
	return (*this);
}

Fixed Fixed::operator+(const Fixed& fixed)const{
	Fixed res;
	res.value = this->value + fixed.value;
	return (res);
}

Fixed Fixed::operator-(const Fixed& fixed)const{
	Fixed res;
	res.value = this->value - fixed.value;
	return (res);
}

Fixed Fixed::operator*(const Fixed& fixed)const{
	Fixed res;
	res.value = (this->value * fixed.value) >> this->bits;
	return (res);
}

Fixed Fixed::operator/(const Fixed& fixed)const{
	Fixed res;
	res.value = (this->value << this->bits) / fixed.value;
	return (res);
}

Fixed& Fixed::operator++(){
	this->value++;
	return  (*this);
}

Fixed& Fixed::operator--(){
	this->value--;
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed temp = *this;
	this->value++;
	return (temp);
}

Fixed Fixed::operator--(int){
	Fixed temp = *this;
	this->value--;
	return(temp);
}

bool Fixed::operator>(const Fixed& to_cmp){
	if (this->value > to_cmp.value)
		return (true);
	else
		return (false);
}

bool Fixed::operator<(const Fixed& to_cmp){
	if (this->value < to_cmp.value)
		return (true);
	else
		return (false);
}

bool Fixed::operator==(const Fixed& to_cmp){
	if (this->value == to_cmp.value)
		return (true);
	else
		return (false);
}

bool Fixed::operator>=(const Fixed& to_cmp){
	if (this->value >= to_cmp.value)
		return (true);
	else
		return (false);
}

bool Fixed::operator<=(const Fixed& to_cmp){
	if (this->value <= to_cmp.value)
		return (true);
	else
		return(false);
}

bool Fixed::operator!=(const Fixed& to_cmp){
	if (this->value != to_cmp.value)
		return (true);
	else
		return (false);
}

const Fixed& Fixed::min(Fixed& ref_one, Fixed& ref_two){
	if (ref_one.value < ref_two.value)
		return (ref_one);
	else
		return (ref_two);
}

const Fixed& Fixed::max(Fixed& ref_one, Fixed& ref_two){
	if (ref_one.value < ref_two.value)
		return (ref_two);
	else
		return (ref_one);
}

const Fixed& Fixed::min(const Fixed& ref_one, const Fixed& ref_two){
	if (ref_one.value < ref_two.value)
		return (ref_one);
	else
		return (ref_two);
}

const Fixed& Fixed::max(const Fixed& ref_one, const Fixed& ref_two){
	if (ref_one.value < ref_two.value)
		return (ref_two);
	else
		return (ref_one);
}

std::ostream& operator<<(std:: ostream& out, const Fixed& fixed){
	out << fixed.toFloat();
	return (out);
}

Fixed::~Fixed(){
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int int_convert){
	// std::cout << "Int constructor called" << std::endl;
	this->value = int_convert << this->bits;
}

Fixed::Fixed(const float float_convert){
	// std::cout << "Float constructor called" << std::endl;
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