#pragma once
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

private:
	int nominator;
	int denominator;
};

