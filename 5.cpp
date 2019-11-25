/* Напишите программу, находящую все простык числа Ченя не превосходящие n. Программа должна работать не более чем за O(n*log log n) шагов.  */
#include <iostream>

using namespace std;

int main()
{
	bool flag = 0;
	int n;
	cin >> n;
	bool A[n];
	for (int y = 0; y <= n + 2; y++) A[y] = 0;

	for (int i = 2; i<n; i++)
	{
		for (long t = i*i; t <= n; t = t + i)
		{
			A[t] = 1;
		}
	}
	for (int i = 2; i <= n; i++) {
		if (A[i] == 0) {
			if (A[i + 2] == 0) {
				cout << i << " "; }
			else

				for (int r = 2; r <= (i + 2) / 2; r++) {
					for (int k = 2; k <= (i + 2) / 2; k++)
					{
						if (i + 2 == r*k) {
							flag = 1;
							break; }
					}
				}
		}
		if (flag == 1) {
			cout << i << " " ; flag = 0; }
	}

	return 0;
}