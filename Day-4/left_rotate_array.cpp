// O(N ^ 2) Time, O(1) space
void LeftRotate(int arr[], int n){
	int temp = arr[0];
	for(int i = 1; i < n; i++){
		arr[i-1] = arr[i];
 	}
 	arr[n-1] = temp;
}

void RotateByD(int arr[], int n, int d){
	for(int i = 0; i < d; i++){
		LeftRotate(arr, n);
	}
}


// O(N) time solution using reverse array technique.
void reverse(int arr[], int low, int high){
	while(low < high){
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
		low++;
		high--;
	}
}
void LeftRotateByD(int arr[], int n, int d){
	reverse(arr, 0, d-1);
	reverse(arr, d, n-1);
	reverse(arr, 0, n-1);
}