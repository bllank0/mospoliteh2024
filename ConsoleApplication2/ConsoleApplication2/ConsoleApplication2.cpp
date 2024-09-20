﻿// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "staticfunction.h"
using namespace std;



// Функция для задания 12-14
int funcref10(int a, int b, int& c, int& d)
{
	c = a + b;
	d = a * b;
	return c, d;
}


// Функция для задания 10
int fun10(int n = 1)
{
	if (n <= 0)
	{
		return 0;
	}
	else
	{
		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum += i;
		}
		return sum;
	}
}



int main()
{
	//ЛАБОРАТОРНАЯ 2 ЗАДАНИЕ 1
	// 1. Получите от пользователя 2 числа.
	// 2. Выведите среднее арифметическое двух введённых чисел в консоль.
	// 3. Попросите пользователя ввести знак операции : +, -, * или / .
	// 5. Используя условный оператор сделайте тоже самое.
	// 6. Реализуйте его с использованием оператора switch - case.

	int x;
	cout << "Enter number: ";
	cin >> x;

	int y;
	cout << "Enter number: ";
	cin >> y;

	int arif = (x + y) / 2;
	cout << arif;

	char oper;
	cout << "\nEnter operation : (+, -, * or /): ";
	cin >> oper;


	/*int result;
	if (oper == '+')
	{
		result = x + y;
		cout << result;
	}
	else if (oper == '-')
	{
		result = x - y;
		cout << result;
	}
	else if (oper == '*')
	{
		result = x * y;
		cout << result;
	}
	else if (oper == '/')
	{
		result = x / y;
		cout << result;
	}
	else
	{
		cout << "not an operation" << endl;
	} */


	int result;
	switch (oper)
	{
	case '+':
		result = x + y;
		cout << result;
		break;
	case '-':
		result = x - y;
		cout << result;
		break;
	case '*':
		result = x * y;
		cout << result;
		break;
	case '/':
		if (y == 0)
		{
			cout << "Cant devide with 0" << endl;
		}
		else
		{
			result = x / y;
			cout << result;
			break;
		}
	default:
		cout << "not an operation" << endl;
	}


	//ЛАБОРАТОРНАЯ 2 ЗАДАНИЕ 2
	// 1. Попросите пользователя ввести целое положительное число.
	// 2. Выведите сумму всех чисел от 1 до введённого числа.
	// 3. Создайте массив из 10 чисел.
	// 4. Выведите все 10 чисел из массива.
	// 5. Выведите числа, стоящие на чётных позициях.
	// 6. Выведите сумму элементов массива, стоящих на нечётных позициях.


	int a;
	while (true)
	{
		cout << "\nEnter number bigger than 0: ";
		cin >> a;
		if (a > 0)
		{
			break;
		}
		else if (a == 0)
		{
			cout << "Number is 0, enter another: " << endl;
		}
		else
		{
			cout << "Number is less than 0, enter another: " << endl;
		}
	}
	cout << "Entered number: " << a << endl;


	int summa = 0;
	int sum_s = summa;
	int sum = summa;

	for (int k = 1; k <= a; k++)
	{
		summa += k;
	}
	cout << "Sum from 1 to entered number is = " << summa << endl;

	int array[] = { 56,89,2,17,154,852,65,1,18,200 };
	for (int a : array)
	{
		cout << a << " ";
	}

	cout << "\nNumbers on even positons: ";

	for (int i = 0; i < 10; i++)
		if (i % 2 == 0)
		{
			cout << array[i] << " ";
		}

	sum = 0;

	for (int i = 0; i < 10; i++)
		if (i % 2 != 0)
		{
			sum += array[i];
		}
	cout << "\nSum of numbers on odd postions = " << sum << endl;


	//ЛАБОРАТОРНАЯ 2 ЗАДАНИЕ 3
	// 1. Создайте двумерный массив.
	// 2. Выведите сумму всех чисел созданного массива.
	// 3. Создайте одномерный массив из 3 - х элементов.
	// 4. В значения массива из предыдущего пункта запишите сумму чисел из столбцов.
	// 5. Выведите получившийся одномерный массив в консоль.


	int arr[2][3] = { {56,8,103},{75,46,12} };
	sum_s = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum_s += arr[i][j];

		}
	}
	cout << "Sum of elemenets is: " << sum_s << endl;


	// 6. Создайте переменную типа float со значением 20.84.
	// 7. Создайте 2 ссылки на созданную переменную.
	// 8. Измените значение у ссылки на новое.
	// 9. Убедитесь, что переменная и другая ссылка так же поменяли значение, выведя их в консоль.


	int arr1[1][3] = { 75, 55, 16 };
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr1[i][j] << " ";
		}
	}
	cout << endl;

	float t = 20.84;
	float& t1 = t;
	float& t2 = t;

	t1 = 35;
	cout << t << " " << t1 << " " << t2 << endl;


	// 10. Создайте функцию, которая принимает число и возвращает 0, если число 0 или отрицательное.
	// Либо сумму чисел от 1 до данного числа, если оно положительное.
	// 11. Сделайте у созданной функции значение по умолчанию у параметра равное 1.
	// Убедитесь, что теперь при вызове этой функции без параметра возвращается 1 (как сумма чисел от 1 до 1).


	int number;
	cout << "Enter a number: ";
	cin >> number;

	int ans = fun10(number);
	cout << "Result: " << ans << endl;


	//12. Создайте функцию, которая принимает 4 значения, 2 последних передаются по ссылке.
	//13. в первую ссылку запишите сумму первых двух параметров, а во вторую ссылку произведение.
	//14. Вызовите функцию значения по ссылке изменились.


	int num1, num2, summ, multipl;
	cout << "Enter number a: ";
	cin >> num1;
	cout << "Enter number b: ";
	cin >> num2;
	funcref10(num1, num2, summ, multipl);

	cout << "c = a + b = " << summ << endl;
	cout << "d = a * b = " << multipl << endl;


	//15. Создайте переменную любого типа с любым значением и выведите её.
	//16. Создайте любой цикл и выведите внутри него переменную из 1 - го пункта 3 раза.
	//17. В рамках цикла объявите ещё одну переменную с любым значением.
	//18. Выведите её 3 раза внутри этого цикла.
	//Попробуйте вывести, созданную переменную внутри цикла, за его пределами.Убедитесь, что компилятор выдаёт ошибку.


	string slovo = "ball";
	for (int i = 0; i < 3; i++)
	{
		cout << slovo << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		//cout << slovo << endl;
		string word = "bottle";
		cout << word << endl;
	}
	//cout << word << endl //выдаёт ошибку, если будет вне цикла (идентификатор word не определён)



	//ЛАБОРАТОРНАЯ 2 ЗАДАНИЕ 4
	//1. Создайте функцию с одним параметром, внутри которой статическая переменная.
	//2. Выведите сумму числа и статической переменной. Статической переменной присвойте значение переданного числа.
	//3. Вызовите функцию несколько раз с разными параметрами и проанализируйте полученный результат.

	staticfunc::staticfunc(45);
	staticfunc::staticfunc(56);
	staticfunc::staticfunc(2);


	//5. Создайте макрос, который будет вычислять сумму двух переданных чисел.

#define SUM(n1,n2) ((n1)+(n2))
	int res = SUM(33, 33);
	cout << "Macros result: " << res << endl;




}