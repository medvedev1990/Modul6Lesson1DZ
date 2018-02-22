
#include<iostream>
#include<stdio.h>
#include<locale.h>


using namespace std;
int IsLeapYear(int *year);
int MonthDays(int M, int &year);
void ShiftRight(int *A, int *B, int *C);
void ShiftLeft(int *A, int *B, int *C);
void PrevDay(int *D, int *M, int *Y);
void NextDay(int *D, int *M, int *Y);
double gipotenuza(double katet1, double katet2);
double f(double *x1, double *y1, double *x2, double *y2);

void main()
{
	setlocale(LC_ALL, "rus");
	cout.precision(3);
	cout.boolalpha;
	unsigned short int n, exit;

	do
	{
		cout << "number exemple?  ";
		cin >> n;
		cout << endl;
		switch (n)
		{
		case 3:
		{
			/*3.Описать функцию IsLeapYear(Y) логического типа,
			которая возвращает True, если год Y (целое положительное число) является високосным, и False в противном случае. Вывести значение функции IsLeapYear для пяти данных значений параметра Y.
			Високосным считается год, делящийся на 4, за исключением тех годов, которые делятся на 100 и не делятся на 400.*/
			int year;
			int i;
			int y;
			for (i = 0;i < 5;i++)
			{
				cout << "введите год" << endl;
				cin >> year;
				y = IsLeapYear(&year);
				if (y == 1)
					cout << " год не високосный" << endl;
				else
					cout << "год  високосный" << endl;
			}
		}
		break;
		case 2:
		{
			/*2.Описать процедуру ShiftLeft3(A, B, C), выполняющую левый циклический сдвиг: значение A переходит в C, значение C — в B, значение B — в A
			(A, B, C — вещественные параметры, являющиеся одновременно входными и выходными).
			С помощью этой процедуры выполнить левый циклический сдвиг для двух данных наборов из трех чисел: (A1, B1, C1) и (A2, B2, C2).*/
			int A, B, C;
			for (int i = 0;i < 2;i++)
			{
				cout << "enter number A: ";
				cin >> A;
				cout << endl;
				cout << "enter number B: ";
				cin >> B;
				cout << endl;
				cout << "enter number C: ";
				cin >> C;
				cout << endl;
				ShiftLeft(&A, &B, &C);
			}
		}
		break;
		case 1:
		{
			/*1.Описать процедуру ShiftRight3(A, B, C), выполняющую правый циклический сдвиг: значение A переходит в B, значение B — в C, значение C — в A
			(A, B, C — вещественные параметры, являющиеся одновременно входными и выходными).
			С помощью этой процедуры выполнить правый циклический сдвиг для двух данных наборов из трех чисел: (A1, B1, C1) и (A2, B2, C2).*/
			int A, B, C;
			for (int i = 0;i < 2;i++)
			{
				cout << "enter number A: ";
				cin >> A;
				cout << endl;
				cout << "enter number B: ";
				cin >> B;
				cout << endl;
				cout << "enter number C: ";
				cin >> C;
				cout << endl;
				ShiftRight(&A, &B, &C);
			}

		}
		break;
		case 4:
		{
			/*4.Используя функцию IsLeapYear из задания 3, описать функцию MonthDays(M, Y) целого типа, которая возвращает количество дней для M-го месяца года Y (1 ≤ M ≤ 12, Y > 0 — целые числа).
			Вывести значение функции MonthDays для данного года Y и месяцев M1, M2, M3.*/
			int M;
			int year;
			int i;
			int Y, m;
			for (i = 0;i < 3;i++)
			{
				cout << "введите месяц ";
				cin >> M;
				cout << endl;
				cout << "введите год";
				cin >> year;
				cout << endl;
				Y = IsLeapYear(&year);
				m = MonthDays(M, year);
				if (Y == 1)
					cout << " год не високосный дней в месяце " << m << endl;
				else
					cout << "год  високосный дней в месяце " << m << endl;
			}
		}
		break;
		case 5://ошибка вывода
		{
			/*5.Используя функцию MonthDays из задания 4, описать процедуру PrevDate(D, M, Y), которая по информации о правильной дате, включаю- щей день D, номер месяца M и год Y, определяет предыдущую дату (пара- метры целого типа D, M, Y являются одновременно входными и выходными).
			Применить процедуру PrevDate к трем исходным датам и вывести полученные значения предыдущих дат*/
			int D, M, Y;
			cout << "введите дату: ";
			cin >> D;
			cout << endl;
			cout << "Enter month: ";
			cin >> M;
			cout << endl;
			cout << "enter year: ";
			cin >> Y;
			cout << endl;
			PrevDay(&D, &M, &Y);
		}
		break;
		case 6://ошибка вывода
		{
			/*6.Используя функцию MonthDays из задания 4, описать процедуру NextDate(D, M, Y), которая по информации о правильной дате, включаю- щей день D, номер месяца M и год Y, определяет следующую дату (пара- метры целого типа D, M, Y являются одновременно входными и выходными).
			Применить процедуру NextDate к трем исходным датам и вывести полученные значения следующих дат*/
			int D, M, Y;
			cout << "введите дату: ";
			cin >> D;
			cout << endl;
			cout << "Enter month: ";
			cin >> M;
			cout << endl;
			cout << "enter year: ";
			cin >> Y;
			cout << endl;
			NextDay(&D, &M, &Y);
		}
		break;
		case 7:
		{
			/*8.Определите функцию double f(double x, double y), которая вычисляет и возвращает длину гипотенузы прямоугольного треугольника, две другие стороны x и y которого известны*/
			double katet1;
			double katet2;
			double gipot;
			cout << "enter katet 1: ";
			cin >> katet1;
			cout << endl;
			cout << "enter katet2: ";
			cin >> katet2;
			cout << endl;
			gipot = gipotenuza(katet1, katet2);
			cout << "длинна гипотенузы равна " << gipot << endl;
		}
		break;
		case 8:
		{
			/*9.Напишите функцию double f(double x1, double y1, double x2, double y2), которая вычисляет расстояние между двумя точками (xl, yl) и (x2, y2)*/
			double x1;
			double x2;
			double y1;
			double y2;
			cout << "введите точку х1: ";
			cin >> x1;
			cout << endl;
			cout << "введите точку у1: ";
			cin >> y1;
			cout << endl;
			cout << "введите точку х2: ";
			cin >> x2;
			cout << endl;
			cout << "введите точку у2: ";
			cin >> y2;
			cout << endl;
			f(&x1, &y1, &x2, &y2);
		}
		break;
		default:cout << "no exemple" << endl;
			break;
		}
		cout << "continue? 1-Yes 2-No: ";
		cin >> exit;
		cout << endl;
	} while (exit == 1);
}
int IsLeapYear(int *year)
{
	if ((*year % 4 != 0) && (*year % 100 != 0) && (*year % 400 != 0))
		return 1;
	else
		return 0;
}
int MonthDays(int M, int &year)
{
	int y;
	switch (M)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	case 2:
		if (IsLeapYear(&year))
			return 28;
		else
			return 29;
		break;
	default: return 0;
		break;
	}
}
void ShiftRight(int *A, int *B, int *C)
{
	int m;
	m = *A;
	*A = *C;
	*C = *B;
	*B = m;
	cout << *A << "; " << *B << " ; " << *C << endl;
}
void ShiftLeft(int *A, int *B, int *C)
{
	int m;
	m = *A;
	*A = *B;
	*B = *C;
	*C = m;
	cout << *A << "; " << *B << " ; " << *C << endl;
}
void PrevDay(int *D, int *M, int *Y)
{
	int m;
	if ((*D == 1) && (*M == 1))
	{
		*M = 12;
		m = MonthDays(*M, *Y);
		cout << "prev day" << m << endl;
	}
	else if (*D == 1)
	{
		*M--;
		m = MonthDays(*M, *Y);
		cout << "prev day " << m << endl;
	}
	else
	{
		*D--;
		cout << "prev day " << *D << endl;
	}

}
void NextDay(int *D, int *M, int *Y)
{
	int m;
	if ((*D == 31) && (*M == 12))
	{
		*M = 1;
		m = MonthDays(*M, *Y);
		cout << "prev day" << m << endl;
	}
	else if (*D == MonthDays(*M, *Y))
	{
		*D = 1;

		cout << "prev day " << *D << endl;
	}
	else
	{
		*D++;
		cout << "prev day " << *D << endl;
	}

}
double gipotenuza(double katet1, double katet2)
{
	double gippot = pow(katet1, 2) + pow(katet2, 2);
	gippot = sqrt(gippot);
	return gippot;
}
double f(double *x1, double *y1, double *x2, double *y2)
{
	int xy1;
	int xy2;
	if (*x1 > *y1)
		xy1 = *x1 - *y1;
	else
		xy1 = *y1 - *x1;
	cout << "расстояние между точками х1 и у1 = " << xy1 << endl;
	if (*x2 > *y2)
		xy2 = *x2 - *y2;
	else
		xy2 = *y2 - *x2;
	cout << "расстояние между точками х2 и у2 = " << xy2 << endl;
	return 0;
}