#include <iostream>
#include "Header.h"

using namespace std;

void Fraction::printFraction()
{
	cout << numerator << "/" << denominator << endl;
}
void Fraction::printFraction(int N, int D)
{
	cout << N << "/" << D << endl;
	if (N >= D)
	{
		int x, y;
		x = N / D;
		y = N % D;
		cout << "или" << endl << x << " целых, " << y << "/" << D << endl;
	}
}

	//числитель
	void Fraction::setNumenator(int N)
	{
		numerator = N;
	}
	int Fraction::getNumenator()
	{
		return numerator;
	}
	//знаменатель
	void Fraction::setDenomenator(int N)
	{
		denominator = N;
	}
	int Fraction::getDenomenator()
	{
		return denominator;
	}

	//сложение дробей
	void Fraction::compliment(int n2, int d2)
	{
		int n3, n4, n0, d0;

		d0 = denominator * d2;
		n3 = numerator * d2;
		n4 = n2 * denominator;
		n0 = n3 + n4;
		printFraction(n0, d0);
	}
	//вычитание дробей
	void Fraction::substraction(int n2, int d2)
	{
		int n3, n4, n0, d0;

		d0 = denominator * d2;
		n3 = numerator * d2;
		n4 = n2 * denominator;
		n0 = n3 - n4;
		printFraction(n0, d0);
	}
	//умножение дробей
	void Fraction::muliply(int n2, int d2)
	{
		int n0, d0;

		d0 = denominator * d2;
		n0 = n2 * numerator;
		printFraction(n0, d0);
	}
	//деление дробей
	void Fraction::divide(int n2, int d2)
	{
		int n0, d0;

		d0 = numerator * d2;
		n0 = n2 * denominator;

		printFraction(n0, d0);
	}