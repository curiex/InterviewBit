#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

//Insertion sort
//O(n) algorithm- best case
//O(n^2) algorithm - avg
//O(n^2) - worst case

int32_t main() {
	//ignore this part  this is for input
#ifndef ONLINE_JUDGE
	freopen( "C:/Users/Home/Desktop/c++/input.txt", "r" , stdin);
	freopen( "C:/Users/Home/Desktop/c++/output.txt", "w" , stdout);
#endif
	//number of elements in an array
	int n;
	cin >> n;
	//declaration of the array
	int arr[n];
	// array itself input
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	// code algo
	for (int i = 1 ; i < n ; i++) {
		int curr = i;
		while (true) {
			if (arr[curr - 1] > arr[curr] && curr >= 1) {
				int temp = arr[curr];
				arr[curr] = arr[curr - 1];
				arr[curr - 1] = temp;
				curr--;
			}
			else {
				break;
			}
		}
	}
	//print
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}