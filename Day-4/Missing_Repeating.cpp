
// O(N) time and O(N) space for storing frequencies in freq[] array.
void repeating_missing(int arr[], int n){
	int freq[n+1] = {0};
	for(int i = 0; i < n; i++){
		freq[arr[i]]++;
	}
	
	int miss, rep;
	for(int i = 1; i <= n; i++){
		if(freq[i] > 1){
			rep = i;
		}
		if(freq[i] == 0){
			miss = i;
		}
	}
	cout << rep << " " << miss << "\n";
}

// Efficient O(N), O(1)
void repeating_missing(int arr[], int n){
	for(int i = 0; i < n; i++){
		if(arr[abs(arr[i]) - 1] > 0){
			arr[abs(arr[i]) - 1] *= -1;
		} else{
			cout << abs(arr[i]) << "\n";
		}
	}
	
	for(int i = 0; i < n; i++){
		if(arr[i] > 0){
			cout << (i+1) << "\n";
		}
	}
}