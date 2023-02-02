Given an array of integers, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates and negative numbers as well.

For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.

You can modify the input array in-place.

*/

#include <iostream>

using namespace std;

int Missing_positive_number(int arr[], int n)

{

		for (int i = 0; i < n; i++) {

		

		while (arr[i] >= 1 && arr[i] <= n && arr[i] != arr[arr[i] - 1]) {

			swap(arr[i], arr[arr[i] - 1]);

		}

	}

	for (int i = 0; i < n; i++) {

		if (arr[i] != i + 1) {

			return i + 1;

		}

	}

	

	return n + 1;

}

// Driver code

int main()

{

	int arr[] = { 0, 10, 2, -10, -20 };

	int n = sizeof(arr) / sizeof(arr[0]);

	int result = Missing_positive_number(arr, n);

	cout << result;

	return 0;

}

// This co
