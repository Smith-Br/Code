#include <fstream>

using namespace std;
int n, s, w[100], dp[100];

int min(int i, int dp[]) {
	if (dp[i] != -1) return dp[i];
	else {
		
	}
}

int main() {
	fstream coins("coins.inp"); coins >> n >> s;
	for (int i = 0; i <= n; i++) {
		coins >> w[i];
		dp[i] = -1;
	}
	dp[0] = 0;


	return 0;
}