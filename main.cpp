#include <bits/stdc++.h>

int main() {
	int i, n, value, small, big;
	
	std::cin >> n >> value;
	
	int arr[n];
	
	for (i = 0; i < n; i++) {
		std::cin >> arr[i];
	}	
	
	/* Sort array */
	std::sort(arr, arr+n);
	
	/* Small value */
	small = arr[0];
	
	/* Big value */ 
	big = arr[0];
	for (i = 0; i < n; i++) {
		if (big < arr[i])
			big = arr[i];
	}	
	
	/* Sum of small and bigger */
	big += small;

	if (value == big) {
		std::cout << "True" << std::endl;
	} else {
		std::cout << "False" << std::endl;
		return 1;
	}

	return 0;
}
