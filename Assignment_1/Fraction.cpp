/*
*
@file
* @author  Sean Doucet sean.doucet@worldoflinux.ca
* @version 1.0
*
*
* @section DESCRIPTION
*  This file is for the implementation of the Fraction class
*
*
* @section LICENSE
*  Copyright Notice
*
*  Copyright 2020 Sean Doucet
*  Permission to use, copy, modify, and/or distribute this software for
*  any purpose with or without fee is hereby granted, provided that the
*  above copyright notice and this permission notice appear in all copies.
*
*  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
*  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
*  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
*  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
*  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
*  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
*  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*
* @section Academic Integrity
*  I certify that this work is solely my own and complies with
*  NBCC Academic Integrity Policy (policy 1111)
*/

// Header File Pre Processor
#include "Fraction.h"

// C++ Standard Library Pre Processor

Fraction::Fraction(int n, int d) : nominator(n), denominator(d) {
	if ((n = 0) || (d = 0)) {
		n++; d++;
	}
	else if ((n < 0) || (d < 0)) {
		n = 1;
		d = 1;
		}
}

Fraction::Fraction(int n) : nominator(n) {
	if (n = 0) {
		n++;
	}
	else if (n < 0) {
		n = 1;
	}
}

Fraction::Fraction() {}

// Fraction Operator Plus
Fraction Fraction::operator+(const Fraction& left) const{
	return true;
}

// Fraction Operator Minus
Fraction Fraction::operator-(const Fraction& left) const{
	return true;
}

// Fraction Operator Multiplication
Fraction Fraction::operator*(const Fraction& left) const{
	return true;
}

bool Fraction::operator*=(const Fraction& left) const {
	return false;
}

// Fraction Operator Equal
bool Fraction::operator==(const Fraction& left) const{
	return true;
}

bool Fraction::operator/=(const Fraction& left) const
{
	return false;
}

// Fraction Operator Not Equal
bool Fraction::operator!=(const Fraction& left) const{
	return true;
}

// Fraction Operator Increment
bool Fraction::operator+=(const Fraction& left) const
{
	return false;
}

// Fraction Operator Decrement
bool Fraction::operator-=(const Fraction& left) const
{
	return false;
}

// Fraction Operator Greater Than
bool Fraction::operator>(const Fraction& left) const{
	return true;
}

// Fraction Operator Less Than
bool Fraction::operator<(const Fraction& left) const{
	return true;
}

// Fraction Operator Less Than Or Equal
bool Fraction::operator<=(const Fraction& left) const{
	return true;
}

// Fraction Operator Greater Than Or Equal
bool Fraction::operator>=(const Fraction& left) const{
	return true;
}

// Fraction Operator Division
Fraction Fraction::operator/(const Fraction& left) const {
	return true;
}

Fraction operator+(const Fraction& left, const Fraction& right) {
	return Fraction();
}

Fraction operator-(const Fraction& left, const Fraction& right) {
	return Fraction();
}

Fraction operator*(const Fraction& left, const Fraction& right) {
	return Fraction();
}

Fraction operator>(const Fraction& left, const Fraction& right)
{
	return Fraction();
}

Fraction operator<(const Fraction& left, const Fraction& right)
{
	return Fraction();
}

Fraction operator/(const Fraction& left, const Fraction& right)
{
	return Fraction();
}

std::ostream& operator<<(std::ostream stream, const Fraction& right) {
	// TODO: insert return statement here
}

std::istream& operator>>(std::istream stream, const Fraction& right) {
	// TODO: insert return statement here
}
