#pragma once
#include <iostream>

using namespace std;

class Fraction
{
private:
	int numerator;
	int denominator;
	//���������� �����
	void printFraction();
	
	void printFraction(int N, int D);
	
public:
	//���������
	void setNumenator(int N);
	
	int getNumenator();
	
	//�����������
	void setDenomenator(int N);
	
	int getDenomenator();
	
	//�������� ������
	void compliment(int n2, int d2);
	
	//��������� ������
	void substraction(int n2, int d2);
	
	//��������� ������
	void muliply(int n2, int d2);
	
	//������� ������
	void divide(int n2, int d2);
	
};

