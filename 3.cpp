/*.Напишите программу находящую первые n составных чисел. Программа должна работать не более чем за О(n*log log n) шагов.*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	int t = 0;
	cin >> n;
	bool A[100000];
	int k = 0;
	for (int i = 2; i*i<n * 2; i++) {
		for (long g = i*i; g <= n * 2; g = g + i) {
			A[g] = 1;
			t++;
		}
	}
	int y = 4;
	while (n != 0) {
		if (A[y] == 1) {
			cout << y <<" ";
			n--;
		}
		y++;
	}
	return 0;
}