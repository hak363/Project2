#include <iostream>
#include <locale.h>
#define Мышка std::cout <<
#include <cctype> // Для toupper
#include <string>
#include <iomanip>
#include <limits> // Для std::numeric_limits
#include <Windows.h>
/*
   Типы данных
   bool             true/false    !0/0
   char             'j'
   short            32768
   int              2147483648
   long             2147483648
   long long        21474836482147483648

   float            1452436/123345
   double           134567645721345.134426367467
   long double      1345676457213451344263.67467

   unsigned

  Операторы
	 Математические: + - * / = % ++ --
	 Сравнительные: < > <= >= == != <=>
	 Логические:      &&    ||   !
					  and   or   not
	 a < 5 || a > -10
	 a < 5
*/



/*int main()
{

	setlocale(LC_ALL, "ru");

	//std::cout << "Hello world\n";
/*
	double myAkb;

	std::cout << "Введите емкость акб смартфона: ";
	std::cin >> myAkb;
	std::cout << "Нужен powerbank минимум на " << myAkb * 3 << "мАч\n";

	std::cin >> myAkb;


	 // asdasd

	 /*

		 тип_данных

	 */
	 /*
	 int one = 10, two, three = 1000;
	 int onE;
	 int returN;
	 one = 100;

	 int мышка;
	 double one;
	 std::cin >> one;
	 std::cout << one + "1000" << "\n";
	 std::cout << one / 3.534 << "\n";
	 */
	 /*
	 int a = 5;

	 if (a == 5 && a < 10)
	 {


	 }
	 else if (true)
	 {

	 }
	 else
	 {


	 }






	 double one, two;
	 char op;
	 std::cout << "Введите первое число: ";
	 std::cin >> one;
	 std::cout << "Введите операцию (+, -, *, /): ";
	 std::cin >> op;
	 std::cout << "Введите второе число: ";
	 std::cin >> two;

	 if (op == '+')
	 {
		std::cout << "Сумма: " << one + two << "\n";
	 }
	 else if (op == '-')
	 {
		 std::cout << "Разность: " << one - two << "\n";
	 }
	 else if (op == '*')
	 {
		 std::cout << "Произведение: " << one * two << "\n";
	 }
	 else if (op == '/' && two != 0)
	 {
		 std::cout << "Частное: " << one / two << "\n";
	 }
	 else
	 {
		 std::cout << "Error";
	 }
	 */

	 //int a = 5;

	 // работает с целими числами
	 /*
	 switch (a)
	 {
	 case 1:
		 std::cout << "One\n";
		 break;
	 case 2:
		 std::cout << "Two\n";
		 break;
	 default:
		 std::cerr << "Err\n";
		 break;
	 }std::cout << a << " ";
	 if (a == 10)
		 {
			 continue;
		 }



		 a++;

	 char s = '*';

	 while (true)
	 {



		 std::cout << "*";



	 }*/
	 /*
	 int num;
	 int sum = 0;

	 std::cout << "Введите числа (0 - завершение):";

	 while (true)
	 {
		 std::cin >> num;
		 if (num == 0)
		 {
			 break;
		 }
		 sum += num;
	 }
	 std::cout << "Сумма введенных чисел: " << sum;
	 */

	 /*do
	 {

		 std::cout << "Hello ";

	 } while (true);

	 while (true)
	 {



	 }*/
	 /*
	 for (int i = 0; i < 5; i++)
	 {
		 std::cout << 1;

	 }

	 while (a < 5)
	 {
		 std::cout << 1;
		 a++;
	 }
	 */
	 /*

		тип_данных имя_массива[размер_массива]

	 */
	 /*
	 const int size = 5;
	 int arr[size]{3,5,7, 6, 4};

	 for (size_t i = 0; i < size; i++)
	 {
		 std::cout << i + 1 << ") " << arr[i] << "\n";

	 }
	 //arr[4] = 100;

	 //std::cout << arr[4];
	 */
	 /*
	 const int size = 4;
	 int arr[size]{};
	 int sum = 0;

		 for (int i = 0; i < size; i++)
		 {
			 std::cin >> arr[i];
		 }
		 // 10 20 15 25
		 for (int i = 0; i < size; i++)
		 {
			 sum = sum + arr[i];
		 }

		 std::cout << sum;
		 */
		 /// int choose = 0;
		  ///double rub = 0, dollar = 83.61, euro = 
/*void Print
double Sum(double first, double second)
{
		return first + second;
}
int Sum(int first, int second)
{
	return first + second;
}
*/
/*template<typename Type, typename Povar>
int Sum(Type a, Povar b)
{
	Type asd;
	return a + b;
}

int Fak(int n)
{
	if (n < 0)
	{
		return 0;
	}
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * Fak(n - 1);
	}
}
*/
void More(int* num)
{
	*num += 2;
}

void More2(int& num)
{
	num += 2;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	/*int a;
	a = rand() % 10 + 1;
	std::cout << a;

	const int size = 5;
	int arr[size]{};

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 19 - 9;
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	for (int i = 0; i < size; i += 1)
	{
		if (arr[i] >= 0)
		{
			std::cout << arr[i] << " ";
		}
	}
	std::cout << "\n\n";
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			std::cout << arr[i] << " ";
		}

	}

	std::cout << "\n\n";
	*/
	/*
	const int row = 3, col = 4;
	int arr[row][col]{ {3,1,2,5},{},{} };

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}

	int colSum = 0;
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++) {
			colSum += arr[j][i];
		}
		std::cout << colSum << "  ";
	}
	std::cout << "\n";
	///for (int i = 0; i < 5; i++)
	//{
	//	arr[i];
	//}*/
	/*
	system("pause");

	std::cout << "Спать\n";

	Sleep(2000);

	system("cls");
	*/
	///int l = 0;
	//while (l < 5)
	//{
	//	l++;
	//}
	/*
	const int s = 5;
	int ivan[s]{};

	for (int i = 0; i < s; i++)
	{
		std::cin >> ivan[i];
	}
	int a = 3, b = 6;
	for (int i = a - 1; i < b - 1; i++)
	{
		if (ivan[i] > )

	}
*/
	//std::pow()
	//std::cout << Sum(3, 4.4) << Sum(3.5, 3.7) << Sum("asd", "gdfsfdg") << Sum(true, false);
	//std::cout << Sum(3, 4.4) << Sum("asd",234);
	//std::cout << Fak(5);
	/*int Ummo(int a, int b)
	{
		int sum = 0;
		for (int i = 0; i < b; i++)
		{
			sum += a;
		}
		return sum;
	}

	int RecUmmo(int a, int b)
	{*/
	/*int a = 10;
	int* ptr = &a; это переменная которая может хранить адрес другой переменной
	int* ptr;
	ptr = &a;
	/*int b = 100;
	*ptr = b;

	std::cout << a << "\n";
	std::cout << &a << "\n";
	std::cout << ptr << "\n";
	std::cout << &ptr << "\n";
	std::cout << *ptr * 2 << "\n";
	More(ptr);
	std::cout << a << "\n";
	More2(a);
	std::cout << a;
	*/

	int arr[5]{ 4,1,7,9,3 };
	std::cout << arr[0] << "\n";
	std::cout << *arr << "\n";
	std::cout << *(arr + 3) << "\n";



		return 0;
}