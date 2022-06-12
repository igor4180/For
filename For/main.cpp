//FOR
#include<iostream>
using namespace std;
//#define FOR_SYNTAX
#define FACTORIAL 
void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef FOR_SYNTAX 
	int n = 10;
	cout << "Введите количество итераций:"; cin >> n;
	for (
		int i = 0;
		i < n; 
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif //FOR_SYNTAX

#ifdef FACTORIAL
	//C клавиатуры вводится число, 
//нужно вычислить факториал этого числа.
	int n; //Число, введенное с клавиатуры
	double f = 1; //Факториал числа
	cout << "введите число:"; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL

}
