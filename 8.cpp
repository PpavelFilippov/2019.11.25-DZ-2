/*Напишите функцию вычисляющую праймориал числа. Программа должна работать не более чем за O(n*log log n) шагов.*/
#include <iostream>

using namespace std;

int primorial(int n)
{
	bool A[n];
	long long k = 1;
	for (int i = 2; i < n; i++) {
		if (i*i>n) break;
		for (long t = i*i; t <= n; t = t + i) {
			A[t] = 1;
		}
	}
	for (int i = 2; i <= n; i++) {
		if (A[i] == 0) { k = k*i; }
	}
	return k;
}

int main()
{
	int n;
	cin >> n;
	cout << primorial(n);
	return 0;
}