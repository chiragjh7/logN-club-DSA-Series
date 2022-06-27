
// brute
// you can generate n! permutation then linearly check.


// In-built function
next_permutation();

// O(N)
void nextPermutation(int arr[], int n){
	int l, k;
	for(k = n-2; k >= 0; k--){
		if(arr[k] < arr[k+1]){
			break;
		}
	}
	if(k < 0){
		reverse(arr, arr+n);
	} else{
		for(int l = n-1; l > k; l--){
			if(arr[l] >= arr[k]){
				break;
			}
		}
		swap(arr[k], arr[l]);
		reverse(arr + k + 1, arr+n);
	}
}