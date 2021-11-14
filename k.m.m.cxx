#include<iostream>
using namespace std;
int main()
{
	int a, b, r, m;
	cout << "please enter two numbers:";
	cout << "\n\n" << "number1=";
	cin >> a;
	cout << "\n" << "number2=";
	cin >> b;
	cout << "\n\n" << "K.M.M of " << a << ',' << b << " is:";
	m = a * b;
	do {
		r = (a % b);
		a = b;
		b = r;
	} while (r != 0);
	cout << m / a;
	return  0;
}