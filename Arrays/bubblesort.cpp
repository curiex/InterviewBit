#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

//Bubble sort using iteration

int32_t main() {
	//ignore this part  this is for input
#ifndef ONLINE_JUDGE
	freopen( "C:/Users/Home/Desktop/c++/input.txt", "r" , stdin);
	freopen( "C:/Users/Home/Desktop/c++/output.txt", "w" , stdout);
#endif
	//input
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	for ( int i = 0 ; i < n ; i++) {
		for ( int j = 0 ; j < n - i; j++) {
			if (arr[j + 1] < arr[j]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	//output
	for (int x : arr) {
		cout << x << " ";
	}
	return 0;
}