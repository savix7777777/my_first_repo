﻿// Math.cpp : Defines the entry point for the console application.
// Created by S.Savchenko.

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main()
{
	start:
	setlocale(LC_ALL, "Russian");
	cout << "Выберите тип матрицы" << endl << "1 - 2x2" << endl << "2 - 2x3" << endl << "3 - 3x2" << endl << "4 - 3x3" << endl;
	string  l;
	cin >> l;
	if (l == "1")
	{
	error_1:
		string k;
		cout << "1 - добавление" << endl << "2 - вычитание" << endl << "3 - Умножение" << endl << "4 - Определитель" << endl << "5 - вознесение в -1 степень" << endl;
		cin >> k;
		if (k == "1")
		{
			float a11, a12, a13, a21, a22, a23, a31, a32, a33;
			float b11, b12, b13, b21, b22, b23, b31, b32, b33;
			float c11, c12, c13, c21, c22, c23, c31, c32, c33;
			cout << "введите a11, a12, a21, a22, b11, b12, b21, b22" << endl;
			cin >> a11;
			cin >> a12;
			cin >> a21;
			cin >> a22;
			cin >> b11;
			cin >> b12;
			cin >> b21;
			cin >> b22;
			c11 = a11 + b11;
			c12 = a12 + b12;
			c21 = a21 + b21;
			c22 = a22 + b22;
			cout << "Результат" << endl << c11 << " " << c12 << endl << c21 << " " << c22 << endl;
			string r;
			cout << "Введите 1 для выхода или 2 для возвращения к началу" << endl;
			cin >> r;
			if (r == "1")
			{
				goto stop;
			}
			else
			{
				goto start;
			}
		}
		else if (k == "2")
		{
			float a11, a12, a13, a21, a22, a23, a31, a32, a33;
			float b11, b12, b13, b21, b22, b23, b31, b32, b33;
			float c11, c12, c13, c21, c22, c23, c31, c32, c33;
			cout << "введите a11, a12, a21, a22, b11, b12, b21, b22" << endl;
			cin >> a11;
			cin >> a12;
			cin >> a21;
			cin >> a22;
			cin >> b11;
			cin >> b12;
			cin >> b21;
			cin >> b22;
			c11 = a11 - b11;
			c12 = a12 - b12;
			c21 = a21 - b21;
			c22 = a22 - b22;
			cout << "Результат" << endl << c11 << " " << c12 << endl << c21 << " " << c22 << endl;
			string r;
			cout << "Введите 1 для выхода или 2 для возвращения к началу" << endl;
			cin >> r;
			if (r == "1")
			{
				goto stop;
			}
			else
			{
				goto start;
			}
		}
		else if (k == "3")
		{
			float a11, a12, a13, a21, a22, a23, a31, a32, a33;
			float b11, b12, b13, b21, b22, b23, b31, b32, b33;
			float c11, c12, c13, c21, c22, c23, c31, c32, c33;
			cout << "введите a11, a12, a21, a22, b11, b12, b21, b22" << endl;
			cin >> a11;
			cin >> a12;
			cin >> a21;
			cin >> a22;
			cin >> b11;
			cin >> b12;
			cin >> b21;
			cin >> b22;
			c11 = a11*b11 + a12*b21;
			c12 = a11*b12 + a12*b22;
			c21 = a21*b11 + a22*b21;
			c22 = a21*b12 + a22*b22;
			cout << "Результат" << endl << c11 << " " << c12 << endl << c21 << " " << c22 << endl;
			string r;
			cout << "Введите 1 для выхода или 2 для возвращения к началу" << endl;
			cin >> r;
			if (r == "1")
			{
				goto stop;
			}
			else
			{
				goto start;
			}
		}
		else if (k == "4")
		{
			float a11, a12, a13, a21, a22, a23, a31, a32, a33;
			float b11, b12, b13, b21, b22, b23, b31, b32, b33;
			float c11, c12, c13, c21, c22, c23, c31, c32, c33;
			float Det;
			cout << "Введите a11, a12, a21, a22, b11, b12, b21, b22" << endl;
			cin >> a11;
			cin >> a12;
			cin >> a21;
			cin >> a22;
			cin >> b11;
			cin >> b12;
			cin >> b21;
			cin >> b22;
			Det = a11*a22 - a21*a12;
			cout << "Результат" << endl << "Определитель  = " << Det << endl;
			string r;
			cout << "Введите 1 для выхода или 2 для возвращения к началу" << endl;
			cin >> r;
			if (r == "1")
			{
				goto stop;
			}
			else
			{
				goto start;
			}
		}
		else if (k == "5")
		{
			float a11, a12, a13, a21, a22, a23, a31, a32, a33;
			float b11, b12, b13, b21, b22, b23, b31, b32, b33;
			float c11, c12, c13, c21, c22, c23, c31, c32, c33;
			float Det;
			cout << "Введите a11, a12, a21, a22" << endl;
			cin >> a11;
			cin >> a12;
			cin >> a21;
			cin >> a22;
			Det = a11*a22 - a21*a12;
			c11 = a22;
			c12 = a12;
			c21 = a21;
			c22 = a11;
			cout << "Результат" << endl << c11 << " " << c12 << endl << c21 << " " << c22 << endl;
			string r;
			cout << "Введите 1 для выхода или 2 для возвращения к началу" << endl;
			cin >> r;
			if (r == "1")
			{
				goto stop;
			}
			else
			{
				goto start;
			}
		}
		else
		{
			goto error_1;
		}
	}

	else if (l == "2")
	{
		string k;
	error_2:
		cout << "1 - добавление" << endl << "2 - вычитание" << endl << "3 - Умножение" << endl << "4 - Определитель" << endl << "5 - вознесение в -1 степень" << endl;
		cin >> k;
		if (k == "1")
		{
			float a11, a12, a13, a21, a22, a23, a31, a32, a33;
			float b11, b12, b13, b21, b22, b23, b31, b32, b33;
			float c11, c12, c13, c21, c22, c23, c31, c32, c33;
			cout << "a11, a12, a13, a21, a22, a23, b11, b12, b13, b21,b22,b23" << endl;
			cin >> a11;
			cin >> a12;
			cin >> a13;
			cin >> a21;
			cin >> a22;
			cin >> a23;
			cin >> b11;
			cin >> b12;
			cin >> b13;
			cin >> b21;
			cin >> b22;
			cin >> b23;
			c11 = a11 + b11;
			c12 = a12 + b12;
			c13 = a13 + b13;
			c21 = a21 + b21;
			c22 = a22 + b22;
			c23 = a23 + b23;
			cout << "Результат" << endl << c11 << " " << c12 << " " << c13 << endl << c21 << " " << c22 << " " << c23 << endl;
			string r;
			cout << "Введите 1 для выхода или 2 для возвращения к началу" << endl;
			cin >> r;
			if (r == "1")
			{
				goto stop;
			}
			else
			{
				goto start;
			}
		}
		else if (k == "2")
		{
			float a11, a12, a13, a21, a22, a23, a31, a32, a33;
			float b11, b12, b13, b21, b22, b23, b31, b32, b33;
			float c11, c12, c13, c21, c22, c23, c31, c32, c33;
			cout << "Введите a11, a12, a13, a21, a22, a23, b11, b12, b13, b21,b22,b23" << endl;
			cin >> a11;
			cin >> a12;
			cin >> a13;
			cin >> a21;
			cin >> a22;
			cin >> a23;
			cin >> b11;
			cin >> b12;
			cin >> b13;
			cin >> b21;
			cin >> b22;
			cin >> b23;
			c11 = a11 - b11;
			c12 = a12 - b12;
			c13 = a13 - b13;
			c21 = a21 - b21;
			c22 = a22 - b22;
			c23 = a23 - b23;
			cout << "Результат" << endl << c11 << " " << c12 << " " << c13 << endl << c21 << " " << c22 << " " << c23 << endl;
			string r;
			cout << "Введите 1 для выхода или 2 для возвращения к началу" << endl;
			cin >> r;
			if (r == "1")
			{
				goto stop;
			}
			else
			{
				goto start;
			}
		}
		else if (k == "3")
		{
			cout << "Невозможно перемножить матрици  данного порядка" << endl;
			string r;
			cout << "Введите 1 для выхода или 2 для возвращения к началу" << endl;
			cin >> r;
			if (r == "1")
			{
				goto stop;
			}
			else
			{
				goto start;
			}
		}
		else if (k == "4")
		{
			cout << "Невозможно найти определитель матрици данного порядка" << endl;
			string r;
			cout << "Введите 1 для выхода или 2 для возвращения к началу" << endl;
			cin >> r;
			if (r == "1")
			{
				goto stop;
			}
			else
			{
				goto start;
			}
		}
		else if (k == "5")
		{
			cout << "Невозможно произвести это действие с матрицей данного порядка" << endl;
			string r;
			cout << "Введите 1 для выхода или 2 для возвращения к началу" << endl;
			cin >> r;
			if (r == "1")
			{
				goto stop;
			}
			else
			{
				goto start;
			}
		}
		else
		{
			goto error_2;
		}
	}
	else if (l == "3")
	{
	error_3:
		string k;
		cout << "1 - добавление" << endl << "2 - вычитание" << endl << "3 - Умножение" << endl << "4 - Определитель" << endl << "5 - вознесение в -1 степень" << endl;
		cin >> k;
		if (k == "1")
		{
			float a11, a12, a13, a21, a22, a23, a31, a32, a33;
			float b11, b12, b13, b21, b22, b23, b31, b32, b33;
			float c11, c12, c13, c21, c22, c23, c31, c32, c33;
			cout << "Введите a11, a12, a21, a22, a31, a32, b11, b12, b21, b22, b31, b32" << endl;
			cin >> a11;
			cin >> a12;
			cin >> a21;
			cin >> a22;
			cin >> a31;
			cin >> a32;
			cin >> b11;
			cin >> b12;
			cin >> b21;
			cin >> b22;
			cin >> b31;
			cin >> b32;
			c11 = a11 + b11;
			c12 = a12 + b12;
			c21 = a21 + b21;
			c22 = a22 + b22;
			c31 = a31 + b31;
			c32 = a32 + b32;
			cout << "Результат" << endl << c11 << " " << c12 << endl << c21 << " " << c22 << " " << endl << " " << c31 << " " << c32 << endl;
			string r;
			cout << "Введите 1 для выхода или 2 для возвращения к началу" << endl;
			cin >> r;
			if (r == "1")
			{
				goto stop;
			}
			else
			{
				goto start;
			}
		}
		else if (k == "2")
		{
			float a11, a12, a13, a21, a22, a23, a31, a32, a33;
			float b11, b12, b13, b21, b22, b23, b31, b32, b33;
			float c11, c12, c13, c21, c22, c23, c31, c32, c33;
			cout << "Введите a11, a12, a21, a22, a31, a32, b11, b12, b21, b22, b31, b32" << endl;
			cin >> a11;
			cin >> a12;
			cin >> a21;
			cin >> a22;
			cin >> a31;
			cin >> a32;
			cin >> b11;
			cin >> b12;
			cin >> b21;
			cin >> b22;
			cin >> b31;
			cin >> b32;
			c11 = a11 - b11;
			c12 = a12 - b12;
			c21 = a21 - b21;
			c22 = a22 - b22;	
			c31 = a31 - b31;
			c32 = a32 - b32;
			cout << "Результат" << endl << c11 << " " << c12 << endl << c21 << " " << c22 << endl << " " << c31 << " " << c32 << endl;
			string r;
			cout << "Введите 1 для выхода или 2 для возвращения к началу" << endl;
			cin >> r;
			if (r == "1")
			{
				goto stop;
			}
			else
			{
				goto start;
			}
		}
		else if (k == "3")
		{
			cout << "Невозможно перемножить матрици  данного порядка" << endl;
			string r;
			cout << "Введите 1 для выхода или 2 для возвращения к началу" << endl;
			cin >> r;
			if (r == "1")
			{
				goto stop;
			}
			else
			{
				goto start;
			}
		}
		else if (k == "4")
		{
			cout << "Невозможно найти определитель матрици данного порядка" << endl;
			string r;
			cout << "Введите 1 для выхода или 2 для возвращения к началу" << endl;
			cin >> r;
			if (r == "1")
			{
				goto stop;
			}
			else
			{
				goto start;
			}
		}
		else if (k == "5")
		{
			cout << "Невозможно произвести это действие с матрицей данного порядка" << endl;
			string r;
			cout << "Введите 1 для выхода или 2 для возвращения к началу" << endl;
			cin >> r;
			if (r == "1")
			{
				goto stop;
			}
			else
			{
				goto start;
			}
		}
		else
		{
			goto error_3;
		}
	}
	else if (l == "4")
	{
	error_4:
		string k;
		cout << "1 - добавление" << endl << "2 - вычитание" << endl << "3 - Умножение" << endl << "4 - Определитель" << endl << "5 - вознесение в -1 степень" << endl;
		cin >> k;
		if (k == "1")
		{
			float a11, a12, a13, a21, a22, a23, a31, a32, a33;
			float b11, b12, b13, b21, b22, b23, b31, b32, b33;
			float c11, c12, c13, c21, c22, c23, c31, c32, c33;
			cout << " a11, a12, a13, a21, a22, a23, a31, a32, a33, b11, b12, b13, b21, b22, b23, b31, b32, b33" << endl;
			cin >> a11;
			cin >> a12;
			cin >> a13;
			cin >> a21;
			cin >> a22;
			cin >> a23;
			cin >> a31;
			cin >> a32;
			cin >> a33;
			cin >> b11;
			cin >> b12;
			cin >> b13;
			cin >> b21;
			cin >> b22;
			cin >> b23;
			cin >> b31;
			cin >> b32;
			cin >> b33;
			c11 = a11 + b11;
			c12 = a12 + b12;
			c13 = a13 + b13;
			c21 = a21 + b21;
			c22 = a22 + b22;
			c23 = a23 + b23;
			c31 = a31 + b31;
			c32 = a32 + b32;
			c33 = a33 + b33;
			cout << "Результат" << endl << c11 << " " << c12 << " " << c13 << endl << c21 << " " << c22 << " " << c23 << endl << " " << c31 << " "<< c32 << " "<< c33 << endl;
			string r;
			cout << "Введите 1 для выхода или 2 для возвращения к началу" << endl;
			cin >> r;
			if (r == "1")
			{
				goto stop;
			}
			else
			{
				goto start;
			}
		}
		else if (k == "2")
		{
			float a11, a12, a13, a21, a22, a23, a31, a32, a33;
			float b11, b12, b13, b21, b22, b23, b31, b32, b33;
			float c11, c12, c13, c21, c22, c23, c31, c32, c33;
			cout << "Введите a11, a12, a13, a21, a22, a23, a31, a32, a33, b11, b12, b13, b21, b22, b23, b31, b32, b33" << endl;
			cin >> a11;
			cin >> a12;
			cin >> a13;
			cin >> a21;
			cin >> a22;
			cin >> a23;
			cin >> a31;
			cin >> a32;
			cin >> a33;
			cin >> b11;
			cin >> b12;
			cin >> b13;
			cin >> b21;
			cin >> b22;
			cin >> b23;
			cin >> b31;
			cin >> b32;
			cin >> b33;
			c11 = a11 - b11;
			c12 = a12 - b12;
			c13 = a13 - b13;
			c21 = a21 - b21;
			c22 = a22 - b22;
			c23 = a23 - b23;
			c31 = a31 - b31;
			c32 = a32 - b32;
			c33 = a33 - b33;
			cout << "Результат" << endl << c11 << " " << c12 << " " << c13 << endl << c21 << " " << c22 << " " << c23 << endl << c31 << " " << c32 << " " << c33 << endl;
			string r;
			cout << "Введите 1 для выхода или 2 для возвращения к началу" << endl;
			cin >> r;
			if (r == "1")
			{
				goto stop;
			}
			else
			{
				goto start;
			}
		}
		else if (k == "3")
		{
			float a11, a12, a13, a21, a22, a23, a31, a32, a33;
			float b11, b12, b13, b21, b22, b23, b31, b32, b33;
			float c11, c12, c13, c21, c22, c23, c31, c32, c33;
			cout << "Введите a11, a12, a13, a21, a22, a23, a31, a32, a33, b11, b12, b13, b21, b22, b23, b31, b32, b33" << endl;
			cin >> a11;
			cin >> a12;
			cin >> a13;
			cin >> a21;
			cin >> a22;
			cin >> a23;
			cin >> a31;
			cin >> a32;
			cin >> a33;
			cin >> b11;
			cin >> b12;
			cin >> b13;
			cin >> b21;
			cin >> b22;
			cin >> b23;
			cin >> b31;
			cin >> b32;
			cin >> b33;
			c11 = a11*b11 + a12*b21 + a13*b31;
			c12 = a11*b12 + a12*b22 + a13*b32;
			c13 = a11*b13 + a12*b23 + a13*b33;
			c21 = a21*b11 + a22*b21 + a23*b31;
			c22 = a21*b12 + a22*b22 + a23*b32;
			c23 = a21*b13 + a22*b23 + a23*b33;
			c31 = a31*b11 + a32*b21 + a33*b31;
			c32 = a31*b12 + a32*b22 + a33*b32;
			c33 = a31*b13 + a32*b23 + a33*b33;
			cout << "Результат" << endl << c11 << " " << c12 << " " << c13 << endl << c21 << " " << c22 << " " << c23 << endl << c31 << " " << c32 << " " << c33 << endl;
			string r;
			cout << "Введите 1 для выхода или 2 для возвращения к началу" << endl;
			cin >> r;
			if (r == "1")
			{
				goto stop;
			}
			else
			{
				goto start;
			}
		}
		else if (k == "4")
		{
			float a11, a12, a13, a21, a22, a23, a31, a32, a33;
			float b11, b12, b13, b21, b22, b23, b31, b32, b33;
			float c11, c12, c13, c21, c22, c23, c31, c32, c33;
			float Det;
			cout << "Введите a11, a12, a13, a21, a22, a23, a31, a32, a33" << endl;
			cin >> a11;
			cin >> a12;
			cin >> a13;
			cin >> a21;
			cin >> a22;
			cin >> a23;
			cin >> a31;
			cin >> a32;
			cin >> a33;
			Det = a11*a22*a33 + a21*a32*a13 + a31*a12*a23 - a31*a22*a31 - a11*a32*a23 - a33*a21*a12;
			cout << "Определитель = " << Det << endl;
			string r;
			cout << "Введите 1 для выхода или 2 для возвращения к началу" << endl;
			cin >> r;
			if (r == "1")
			{
				goto stop;
			}
			else
			{
				goto start;
			}
		}
		else if (k == "5")
		{
			float a11, a12, a13, a21, a22, a23, a31, a32, a33;
			float b11, b12, b13, b21, b22, b23, b31, b32, b33;
			float c11, c12, c13, c21, c22, c23, c31, c32, c33;
			float Det;
			cout << "Введите a11, a12, a13, a21, a22, a23, a31, a32, a33" << endl;
			cin >> a11;
			cin >> a12;
			cin >> a13;
			cin >> a21;
			cin >> a22;
			cin >> a23;
			cin >> a31;
			cin >> a32;
			cin >> a33;
			Det = a11*a22*a33 + a21*a32*a13 + a31*a12*a23 - a31*a22*a31 - a11*a32*a23 - a33*a21*a12;
			c11 = (a22*a33 - a23*a32) * 1 / Det;
			c12 = -(a21*a33 - a31*a23) * 1 / Det;
			c13 = (a21*a32 - a31*a22) * 1 / Det;
			c21 = -(a12*a33 - a13*a32) * 1 / Det;
			c22 = (a11*a33 - a13*a31) * 1 / Det;
			c23 = -(a11*a32 - a12*a31) * 1 / Det;
			c31 = (a12*a23 - a22*a13) * 1 / Det;
			c32 = -(a11*a23 - a21*a13) * 1 / Det;
			c33 = (a11*a22 - a12*a21) * 1 / Det;
			cout << "Результат" << endl << c11 << " " << c12 << " " << c13 << endl << c21 << " " << c22 << " " << c23 << endl << " " << c31 << " " << c32 << " " << c33 << endl;
			string r;
			cout << "Введите 1 для выхода или 2 для возвращения к началу" << endl;
			cin >> r;
			if (r == "1")
			{
				goto stop;
			}
			else
			{
				goto start;
			}
		}
		else
		{
			goto error_4;
		}
	}
	stop:
		exit(0);
		return 0;
}

