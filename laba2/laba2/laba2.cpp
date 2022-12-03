#include <iostream>
using namespace std;

void main()
{

	int a, b, c;

	int sum, mult, average;

	cout << "Enter 3 numbers: " << endl;

	cin >> a >> b >> c;

	sum = a + b + c;
	cout << "the sum of three numbers = " << sum << endl;

	mult = a * b * c;
	cout << "the product of three numbers = " << mult << endl;

	average = (a + (b * c)) / 3;
	cout << "the average of three numbers = " << average << endl;

}