// Brute - O(NlogN) time, O(1) space
int Find_Duplicate(int arr[], int n){
	sort(arr, arr+n);
	for(int i = 1; i < n; i++){
		if(arr[i-1] == arr[i]){
			return i;
		}
	}
	return -1;
}

// Better - O(N) time, O(N) space
int Find_Duplicate(int arr[], int n){
	int freq[n+1] = {0};
	for(int i = 0; i < n; i++){
		freq[arr[i]]++;
		if(freq[arr[i]] > 1)
			return arr[i];
	}
	return -1;
}

// Hare and Tortoise / Floyd Cycle Detection Method - O(N) time , O(1) space
int Find_Duplicate(int arr[], int n){
	int slow = arr[0];
	int fast = arr[0];
	do{
		slow = arr[slow];
		fast = arr[arr[fast]];
	} while(slow != fast);
	
	fast = arr[0];
	while(slow != fast){
		slow = arr[slow];
		fast = arr[fast];
	}
	return slow;
}
