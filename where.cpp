# include <iostream>
# include <ctime>
int main() {
	setlocale(LC_ALL, "Russian"); 
	//Решение задач.
	//Дано целое число N (> 0). Сформировать и вывести целочисленный
	//массив размера N, содержащий N первых положительных нечетных чисел :
	//1, 3, 5, . . . .
	const int n = 10; 
	int mas[n];
	mas[0] = 1; 
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] + 2; 
	}
	for (int i = 0; i < n; i++) {
		std::cout << mas[i] << ' '; 
    }
	std::cout << std::endl;

//Дано целое число N (> 0). Сформировать и вывести целочисленный
	//массив размера N, содержащий степени двойки от первой до N - й: 2, 4,
		//8, 16,
	const int N = 10; 
	int mas[N]; 
	mas[0] = 2; 
	for (int i1 = 1; i1 < N; i1++) {
		mas[i1] = mas[i1 - 1] * 2; 
	}
	for (int i1 = 0; i1 < N; i1++) {
		std::cout << mas[i1] << ' '; 
	}
	std::cout << std::endl;

//Дано целое число N (> 1), а также первый член A и разность D арифметической прогрессии. Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии:
//A, A + D, A + 2·D, A + 3·D, . . . .
	const int n = 10;
	int mas[n];
	int a, d; 
	std::cout << "a:"; 
	std::cin >> a; 
	std::cout << "d:"; 
	std::cin >> d; 
	mas[0] = a;
	for (int i3 = 1; i3 < n; i3++) {
		mas[i3] = mas[i3 - 1] + d;
	}
	for (int i3 = 0; i3 < n; i3++) {
		std::cout << mas[i3] << ' ';
	}
	std::cout << std::endl;

//Дано целое число N (> 1), а также первый член A и знаменатель D
	//геометрической прогрессии.Сформировать и вывести массив размера N,
		//содержащий N первых членов данной прогрессии :
	//A, A·D, A·D2, A·D3, . . . .
	const int n = 10;
	int mas[n];
	int A, D;
	std::cout << "A:";
	std::cin >> A;
	std::cout << "D:";
	std::cin >> D;
	mas[0] = A;
	for (int i2 = 1; i2 < n; i2++) {
		mas[i2] = mas[i2 - 1] * D;
	}
	for (int i2 = 0; i2 < n; i2++) {
		std::cout << mas[i2] << ' ';
	}
	std::cout << std::endl;

//Дано целое число N (> 2). Сформировать и вывести целочисленный
	//массив размера N, содержащий N первых элементов последовательности
		//чисел Фибоначчи FK :
	//F1 = 1, F2 = 1, FK = FK−2 + FK−1, K = 3, 4, . . . .
	const int n1 = 10; 
	int mas[n1];
	mas[0] = 1; 
	mas[1] = 1; 
	for (int i4 = 1; i4 < n1; i4++) {
		mas[i4] = mas[i4 - 2] + mas[i4 - 1]; 
	}
	for (int i4 = 0; i4 < n1; i4++) {
		std::cout << mas[i4] << ' '; 
	}
	std::cout << std::endl;

//Даны целые числа N (> 2), A и B. Сформировать и вывести целочисленный массив размера N, первый элемент которого равен A, второй
//равен B, а каждый последующий элемент равен сумме всех предыдущих.
	const int N1 = 10; 
	int mas[N1]; 
	int A1, B;
	std::cout << "A:"; 
	std::cin >> A1;
	std::cout << "B:"; 
	std::cin >> B; 
	mas[0] = A1; 
	mas[1] = B;
	for (int i5 = 2; i5 < N1; i5++) {
		for (int i6 = 0; i6 > i5; i6++) 
        mas[i5] = mas[i5] + mas[i6];
	}
	for (int i5 = 0; i5 < N1; i5++) {
		std::cout << mas[i5] << ' '; 
	}
	std::cout << std::endl; // Я не знаю как её решить.

//Дан массив размера N. Вывести его элементы в обратном порядке.
const int N2 = 10;
int mas[N2];
for (int i7 = 0; i7 < N2; i7++) {
	std::cout << "mas[" << i7 << "]"; 
	std::cin >> mas[i7]; 
     }
for (int i7 = N2 - 1; i7 >= 0; i7--) {
	std::cout << "mas[" << i7 << "]" << mas[i7] << std::endl; 
  }
}