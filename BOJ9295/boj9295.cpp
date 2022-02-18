// BOJ 9295
// 주사위
// 1트

#include <iostream>
using namespace std;

int main()
{
	int t, x, y;
	int sum = 0;
	cin >> t;

	int* arr = new int[t];

	for (int i = 0; i < t; i++) {
		cin >> x >> y;
		arr[i] = x + y;
	}

	for (int i = 1; i <= t; i++) {
		cout << "Case " << i << ": " << arr[i - 1] << endl;
	}

	return 0;
}