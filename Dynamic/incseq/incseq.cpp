#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int A[100], n, L[100];

void incseq(int i, int A[]) {
	for (int j = 1; j < n; j++) {
		if (A[j] < A[i]) L[i] = max(L[i], L[j] + 1);
	}
}

int main() {
	L[1] = 1; // Bài toán cơ sở.
	fstream inp("incseq.inp"); inp >> n;
	for (int i = 0; i <= n; i++) L[i] = -1;
	for (int i = 1; i <= n; i++) inp >> A[i];
	for (int j = 2; j <= n; j++) incseq(j, A);
	int Lmax = L[1];
	for (int i = 1; i <= n; i++) Lmax = max(L[i], Lmax);
	fstream out("incseq.out"); out << Lmax;
	return 0;
}