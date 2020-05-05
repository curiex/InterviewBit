#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

//Selection sort using iteration

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
	for (int i = 0; i < n ; i++) {
		cin >> arr[i];
	}
	//algo
	for (int i = 0; i < n; i++) {
		int min = arr[i];
		int minidx = i;
		for (int j = i; j < n; j++) {
			if (arr[j] < min) {
				min = arr[j];
				minidx = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[minidx];
		arr[minidx] = temp;
	}
	//output
	for (int x : arr) {
		cout << x << " ";
	}
	return 0;
}