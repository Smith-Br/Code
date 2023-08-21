#include <iostream>

using namespace std;

int n; int fib[1000];

int fibbonacci(int n, int fib[]) {
	if (fib[n] != -1) return fib[n];
	else return fib[n] = fibbonacci(n - 1, fib) + fibbonacci(n - 2, fib);
}

int main() {
	cin >> n;
	for (int i = 0; i <= n; i++) fib[i] = -1;
	fib[1] = 0; fib[2] = 1;
	cout << fibbonacci(n, fib);
	return 0;
}