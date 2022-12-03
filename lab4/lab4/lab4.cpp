#include <iostream>
using namespace std;
int main()
{
	double b[7];
	int i;
	cout << "Enter 7 elements\n";
	for (i = 0; i < 7; i++)
		cin >> b[i];
	cout << "Array b consists of the following elements:\n";
	for (i = 0; i < 7; i++)
		cout << "b[" << i << "]=" << b[i] << endl;
	double a[6];
	for (i = 0; i < 6; i++)
		a[i] = ((b[i] + b[i + 1]) / 2);
	cout << "Array a consists of the following elements:\n";
	for (i = 0; i < 6; i++)
		cout << "a[" << i << "]=" << a[i] << endl;
	return 0;


}