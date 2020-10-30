// Lab_5.3.cpp
// Дорожовець Володимир 
// Лабораторна робота № 5.3
// Функції, що містять розгалуження та цикли з рекурентними співвідношеннями.
// Варіант 0.6 

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double j(const double x);

int main()
{
	double kp, kkin, l;
	int n;

	cout << "kp = "; cin >> kp;
	cout << "kkin = "; cin >> kkin;
	cout << "n = "; cin >> n;

	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "kp" << "   |"
		<< setw(7) << "kkin" << "    |"
		<< setw(10) << "   l" << "         |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;


	double dk = (kkin - kp) / n;
	double k = kp;

	while (k <= kkin)
	{
		l = j(k) + j(k - 1) * j(k - 1) + 2 * j(1);
		cout << "|" << setw(7) << setprecision(2) << kp << " |"
			<< setw(10) << setprecision(5) << kkin << " |"
			<< setw(10) << setprecision(5) << l << " " << l << " |"
			<< setw(5) << n << " |"
			<< endl;

		k += dk;
	}
	cout << "-------------------------------------------------" << endl;


	return 0;
}

double j(const double x)
{
	if (abs(x) >= 1)
		return (sin(x) + 1) / (cos(x) * cos(x) + exp(x));
	else
	{
		double S = 0;
		int k = 0;
		double a = 1;
		S = a;
		do
		{
			k++;
			double R = (2.0 * x * 1.0 * x * 1.0) / (2.0 * k * 1.0 * k * 1.0 - k * 1.0);
			a *= R;
			S += a;
		} while (k < 7);
		return 1 / cos(2.0 * x) * S;
	}
}
