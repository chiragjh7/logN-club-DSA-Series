// O(N^2)
int Stock(int arr[], int n){
	int maxDiff = 0;
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(arr[j] > arr[i]){
				maxDiff = max(arr[j] - arr[i], maxDiff);
			}
		}
	}
	return maxDiff;
}

// O(N)
int Stock(int arr[], int n){
	int maxProfit = 0;
	int minPrice = INT_MIN;
	for(int i = 0; i < n; i++){
		minPrice = min(minPrice, arr[i]);
		maxProfit = max(maxProfit, arr[i] - minPrice);
	}
	return maxProfit;
}