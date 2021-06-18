#include <iostream>
#include "Header.h"
using namespace std;

//class Fraction
//{
//private:
//	int numerator;
//	int denominator;
//	//напечатать дробь
//	void printFraction()
//	{
//		cout << numerator << "/" << denominator << endl;
//	}
//	void printFraction(int N, int D)
//	{
//		cout << N << "/" << D << endl;
//		if (N >= D)
//		{
//			int x, y;
//			x = N / D;
//			y = N % D;
//			cout << "или" << endl << x << " целых, " << y << "/" << D << endl;
//		}
//	}
//public:
//	//числитель
//	void setNumenator(int N)
//	{
//		numerator = N;
//	}
//	int getNumenator()
//	{
//		return numerator;
//	}
//	//знаменатель
//	void setDenomenator(int N)
//	{
//		denominator = N;
//	}
//	int getDenomenator()
//	{
//		return denominator;
//	}
//
//	//сложение дробей
//	void compliment(int n2, int d2)
//	{
//		int n3, n4, n0, d0;
//
//		d0 = denominator * d2;
//		n3 = numerator * d2;
//		n4 = n2 * denominator;
//		n0 = n3 + n4;
//		printFraction(n0, d0);
//	}
//	//вычитание дробей
//	void substraction(int n2, int d2)
//	{
//		int n3, n4, n0, d0;
//
//		d0 = denominator * d2;
//		n3 = numerator * d2;
//		n4 = n2 * denominator;
//		n0 = n3 - n4;
//		printFraction(n0, d0);
//	}
//	//умножение дробей
//	void muliply(int n2, int d2)
//	{
//		int n0, d0;
//
//		d0 = denominator * d2;
//		n0 = n2 * numerator;
//		printFraction(n0, d0);
//	}
//	//деление дробей
//	void divide(int n2, int d2)
//	{
//		int n0, d0;
//
//		d0 = numerator * d2;
//		n0 = n2 * denominator;
//
//		printFraction(n0, d0);
//	}
//};


int main()
{
	setlocale(LC_ALL, "Rus");
		
	Fraction f1, f2;
	int x;

	cout << "Числитель первого числа : ";
	cin >> x;
	f1.setNumenator(x);

	cout << "Знаменатель первого числа : ";
	cin >> x;
	f1.setDenomenator(x);

	cout << "Числитель второго числа : ";
	cin >> x;
	f2.setNumenator(x);

	cout << "Знаменатель второго числа : ";
	cin >> x;
	f2.setDenomenator(x);

	cout << f1.getNumenator() << "/" << f1.getDenomenator() << " + " << f2.getNumenator() << "/" << f2.getDenomenator() << " = "; f1.compliment(f2.getNumenator(), f2.getDenomenator());
	cout << f1.getNumenator() << "/" << f1.getDenomenator() << " - " << f2.getNumenator() << "/" << f2.getDenomenator() << " = "; f1.substraction(f2.getNumenator(), f2.getDenomenator());
	cout << f1.getNumenator() << "/" << f1.getDenomenator() << " * " << f2.getNumenator() << "/" << f2.getDenomenator() << " = "; f1.muliply(f2.getNumenator(), f2.getDenomenator());
	cout << f1.getNumenator() << "/" << f1.getDenomenator() << " / " << f2.getNumenator() << "/" << f2.getDenomenator() << " = "; f1.divide(f2.getNumenator(), f2.getDenomenator());

}