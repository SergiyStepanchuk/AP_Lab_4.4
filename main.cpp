// Степанчук Сергій 
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 20

#include <iostream> 
#include <iomanip>

using namespace std;

void main() {
	double x, x_end, x_delta, R, y;

	cout.setf(ios::left);
	cout << setw(10) << "x start" << " = "; cin >> x;
	cout << setw(10) << "x end" << " = "; cin >> x_end;
	cout << setw(10) << "x delta" << " = "; cin >> x_delta;
	cout << setw(10) << "R" << " = "; cin >> R;

	cout << "--------------------------------" << endl; // 32
	cout << "|" << setw(14) << "x" << " |" << setw(14) << "y" << "|" << endl; // 14
	cout << "--------------------------------" << endl; // 32

	cout << fixed;
	for (; x <= x_end; x += x_delta)
	{
		if (x < 0)
			y = x / -2;
		else if (x <= R)
			y = R - sqrt(R * R - x * x);
		else if (x <= 2 * R)
			y = sqrt(R * R - pow(x - R, 2));
		else y = x / -6;


		cout << "|" << setprecision(2) << setw(14) << x << " |" << setw(14) << setprecision(3) << y << "|" << endl;
		cout << "--------------------------------" << endl; // 32
	}
}
