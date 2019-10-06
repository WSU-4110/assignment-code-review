#include "stdafx.h"
#include <iostream> 
#include <math.h> 
#include <stdio.h>

using namespace std;

int main()
{
	float a, b, PI;
	int c;
	char ch;
	std::cout << endl;
	cout << "******************** Calculator ******************\n";
	cout << "---------------------------------------------------\n";
	cout << "Operations\t" << "\tTrigonometric Functions" << "\t\tLogarithmic Functions\n";
	cout << "------------------------------------------------\n";
	cout << "1: Division\t\t" << "7: Sin\t\t" << "\t\t13: Log" << endl;
	cout << "2: Multiplication\t" << "8: Cos\t\t" << "\t\t14: Log with base 10" << endl;
	cout << "3: Subtraction\t\t" << "9: Tan\t\t" << endl;
	cout << "4: Addition\t\t" << "10: Inverse of Sin" << endl;
	cout << "5: Exponent\t\t" << "11: Inverse of Cos" << endl;
	cout << "6: Square root\t\t" << "12: Inverse of Tan" << endl;
	cout << "Enter the function that you want to perform : ";
	cin >> c;
	PI = 3.14159265;
	switch (c)
	{
	case 1:
		cout << "Enter 1st number : ";
		cin >> a;
		cout << "Enter 2nd number : ";
		cin >> b;
		cout << "Division = " << a / b << endl;
		system("pause");
		break;
	case 2:
		cout << "Enter 1st number : ";
		cin >> a;
		cout << "Enter 2nd number : ";
		cin >> b;
		cout << "Multiplication = " << a * b << endl;
		system("pause");
		break;
	case 3:
		cout << "Enter 1st number : ";
		cin >> a;
		cout << "Enter 2nd number : ";
		cin >> b;
		cout << "Subtraction = " << a - b << endl;
		system("pause");
		break;
	case 4:
		cout << "Enter 1st number : ";
		cin >> a;
		cout << "Enter 2nd number : ";
		cin >> b;
		cout << "Addition = " << a + b << endl;
		system("pause");
		break;
	case 5:
		cout << "Enter the number : ";
		cin >> a;
		cout << "Enter the exponent : ";
		cin >> b;
		cout << "Exponent = " << pow(a, b) << endl;
		system("pause");
		break;
	case 6:
		cout << "Enter the number : ";
		cin >> a;
		cout << "Square Root = " << sqrt(a) << endl;
		system("pause");
		break;
	case 7:
		cout << "Enter the number : ";
		cin >> a;
		cout << "Sin = " << sin(a * PI / 180.0) << endl;
		system("pause");
		break;
	case 8:
		cout << "Enter the number : ";
		cin >> a;
		cout << "Cos = " << cos(a * PI / 180.0) << endl;
		system("pause");
		break;
	case 9:
		cout << "Enter the number : ";
		cin >> a;
		cout << "Tan = " << tan(a * PI / 180.0) << endl;
		system("pause");
		break;
	case 10:
		cout << "Enter the number : ";
		cin >> a;
		cout << "Inverse of Sin = " << asin(a)*180.0 / PI << endl;
		system("pause");
		break;
	case 11:
		cout << "Enter the number : ";
		cin >> a;
		cout << "Inverse of Cos = " << acos(a)*180.0 / PI << endl;
		system("pause");
		break;
	case 12:
		cout << "Enter the number : ";
		cin >> a;
		cout << "Inverse of tan = " << atan(a)*180.0 / PI << endl;
		system("pause");
		break;
	case 13:
		cout << "Enter the number : ";
		cin >> a;
		cout << "Log = " << log(a) << endl;
		system("pause");
		break;
	case 14:
		cout << "Enter the number : ";
		cin >> a;
		cout << "Log with base 10 = " << log10(a) << endl;
		system("pause");
		break;
	default:
		cout << "Wrong Input" << endl;
	}
	return 0;
}



