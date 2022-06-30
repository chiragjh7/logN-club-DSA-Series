
// brute force - O(N^2)
void leaders(int arr[], int n){
	for(int i = 0; i < n; i++){
		bool flag = false;
		for(int j = i+1; j < n; j++){
			if(arr[j] >= arr[i]){
				flag = true;
				break;
			}
		}
		if(flag == false){
			cout << arr[i] << " ";
		}
	}
}

// Linear time - O(N)
void leaders(int arr[], int n){
	int curr_ldr = arr[n-1];
	cout << curr_ldr;
	for(int i = n-2; i >= 0; i--){
		if(arr[i] >= curr_ldr){
			curr_ldr = arr[i];
			cout << curr_ldr;
		}
	}
}