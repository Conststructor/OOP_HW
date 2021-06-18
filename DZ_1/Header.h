#pragma once
#include <iostream>

using namespace std;

class Fraction
{
private:
	int numerator;
	int denominator;
	//напечатать дробь
	void printFraction();
	
	void printFraction(int N, int D);
	
public:
	//числитель
	void setNumenator(int N);
	
	int getNumenator();
	
	//знаменатель
	void setDenomenator(int N);
	
	int getDenomenator();
	
	//сложение дробей
	void compliment(int n2, int d2);
	
	//вычитание дробей
	void substraction(int n2, int d2);
	
	//умножение дробей
	void muliply(int n2, int d2);
	
	//деление дробей
	void divide(int n2, int d2);
	
};

