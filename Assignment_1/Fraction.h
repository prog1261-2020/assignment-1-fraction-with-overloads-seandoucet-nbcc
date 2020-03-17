#pragma once
/**
*
@file
* @author  Sean Doucet sean.doucet@worldoflinux.ca
* @version 1.0
*
*
* @section DESCRIPTION
*  This file is the header for the Fraction class
*
*
* @section LICENSE
*  <any necessary attributions>
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

class Fraction
{
public:
	Fraction(int n, int d);

	// All Operator Overloading Posibilities
	 bool operator +(const Fraction&) const; // Plus Operator
	 bool operator -(const Fraction&) const; // Minus Operator
	 bool operator *(const Fraction&) const; // Multiplication Operator
	 bool operator ==(const Fraction&) const; // Equals Operator
	 bool operator !=(const Fraction&) const; // Not Equal Operator
	 bool operator >(const Fraction&) const; // Greater Than
	 bool operator <(const Fraction&) const; // Less Than
	 bool operator <=(const Fraction&) const; // Less Than or Equal To
	 bool operator >=(const Fraction&) const; // Greater Than or Equal To
	 bool operator >>(const Fraction&) const; // Stream Insertion Operator
	 bool operator/(const Fraction&) const; // Division

private:
	int nominator;
	int denominator;
};

