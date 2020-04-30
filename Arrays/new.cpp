#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int32_t main() {
#ifndef ONLINE_JUDGE
	freopen( "C:/Users/Home/Desktop/c++/input.txt", "r" , stdin);
	freopen( "C:/Users/Home/Desktop/c++/output.txt", "w" , stdout);
#endif
	int P[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	for (int i = 0; i < 10; i++) {
		cout << *(P + i) << " ";
	}
	return 0;
}