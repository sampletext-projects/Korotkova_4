#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Выполнила  студентка группы УЗС-111 Короткова Анастасия Игоревна\n";
	cout << "Программа для поиска простых чисел\n";

	cout << setprecision(8);

	double x;
	cout << "Введите X: ";
	cin >> x;

	for (int k = 5; k <= 20; k += 5)
	{
		double y = 0;//Y(x)
		double n = 1;//текущий элемент
		double r = x;//текущий X ^ N
		int m = 1;//-1^N
		while (n <= k)
		{
			//cout << (m == 1 ? "+" : "-") << "x^" << n << "/" << n << endl;
			y += m * r / n;
			n++;
			m *= -1;
			r *= x;
		}
		cout << "Y(" << x << ") [n:" << k << "] = " << y << "\n";
	}

	system("pause");
}
