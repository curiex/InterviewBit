#include <iostream>
#define endl "\n"
using namespace std;

void merge(int *arr, int start, int mid, int end) {
	//creating a temporary array to store the sorted array
	int temparr[end - start + 1];
	//new variables for the opreation
	// pointers i and j for iterating through both sides of the array
	int i = start, j = mid + 1;
	int k = 0;

	// algorithm
	/*intorducing to ponters i and j, going through each value
	  and choosing wichever is smaller and inserting into the
	  temporary array*/
	while (i <= mid && j <= end) {
		if (arr[i] <= arr[j]) {
			temparr[k] = arr[i];
			i++;
			k++;
		}
		else {
			temparr[k] = arr[j];
			j++;
			k++;
		}
	}
	/* if whole of the right side is used
	   insert the remaining items in the left
	   into the array*/
	while (i <= mid) {
		temparr[k] = arr[i];
		i++;
		k++;
	}
	/* if whole of the left side is used
	   insert the remaining items in the right
	   into the array*/
	while (j <= end) {
		temparr[k] = arr[j];
		j++;
		k++;
	}
	/*storing back the temporary array back to the
	  original array*/
	for (int x = start; x <= end; ++x) {
		arr[x] = temparr[x - start];
	}
}

//note that the origianl array is getting modified
void mergesort(int arr[], int i, int j) {
	/*we have to divide before we hit 1 element  each ,
	 in the last case 2 elements will be broken
	 down (since 1!=2) and hence every element is satisfied*/
	if (i != j) {
		int mid = (i + j) / 2;
		mergesort(arr, i, mid);
		mergesort(arr, mid + 1, j);
		/*mergeging the sorted arrays ,  note that the arrays
		will not be sorted until both sides of the array is sorted*/
		merge(arr, i, mid, j);
	}
}

int main() {
	//ignore this part  this is for input
#ifndef ONLINE_JUDGE
	freopen( "C:/Users/Home/Desktop/c++/input.txt", "r" , stdin);
	freopen( "C:/Users/Home/Desktop/c++/output.txt", "w" , stdout);
#endif
	//input length of array
	int n;
	cin >> n;
	//array input
	int arr[n];
	for (int i = 0; i < n ; ++i) {
		cin >> arr[i];
	}
	//merge sort
	mergesort(arr, 0, n - 1);
	//printing the elements
	for (int x : arr) {
		cout << x << " ";
	}
}
