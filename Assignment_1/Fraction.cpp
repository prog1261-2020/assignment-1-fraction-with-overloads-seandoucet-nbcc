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

}

// Fraction Operator Plus
bool Fraction::operator+(const Fraction&) const{
	return true;
}

// Fraction Operator Minus
bool Fraction::operator-(const Fraction&) const{
	return true;
}

// Fraction Operator Multiplication
bool Fraction::operator*(const Fraction&) const{
	return true;
}

// Fraction Operator Equal
bool Fraction::operator==(const Fraction&) const{
	return true;
}

// Fraction Operator Not Equal
bool Fraction::operator!=(const Fraction&) const{
	return true;
}

// Fraction Operator Greater Than
bool Fraction::operator>(const Fraction&) const{
	return true;
}

// Fraction Operator Less Than
bool Fraction::operator<(const Fraction&) const{
	return true;
}

// Fraction Operator Less Than Or Equal
bool Fraction::operator<=(const Fraction&) const{
	return true;
}

// Fraction Operator Greater Than Or Equal
bool Fraction::operator>=(const Fraction&) const{
	return true;
}

// Fraction Operator Stream Insertion Operator
bool Fraction::operator>>(const Fraction&) const{
	return true;
}

// Fraction Operator Division
bool Fraction::operator\(const Fraction&) const {
	return true;
}




