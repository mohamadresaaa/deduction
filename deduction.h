//
// deduction.h
// Created by Mohamadreza Mosalli on 9/17/1398 AP.

#include <iostream>

using namespace std;

class deduction {
private:
	int numerator;
	int denominator;

public:
	void input() {
		cout << "enter numerator: ";
		cin >> this->numerator;
		cout << "enter denominator: ";
		cin >> this-> denominator;
	}
	void show() {
		cout << " " << this->numerator << "\n";
		cout << "---" << "\n";
		cout << " " << this->denominator << "\n";
	}
	void sum(deduction obj) {
		if(this->denominator != obj.denominator) {
			this->numerator *= obj.denominator;
			obj.numerator *= this->denominator;
		}
		this->denominator *= obj.denominator;
		this->numerator += obj.numerator;
	}
	void minus(deduction obj) {
		if(this->denominator != obj.denominator) {
			this->numerator *= obj.denominator;
			obj.numerator *= this->denominator;
		}
		this->denominator -= obj.denominator;
		this->numerator -= obj.numerator;
	}
	void multiplication(deduction obj) {
		this->denominator *= obj.denominator;
		this->numerator *= obj.numerator;
	}
	void division(deduction obj) {
		this->denominator *= obj.numerator;
		this->numerator *= obj.denominator;
	}
};