// O(N)
int FirstOcc(int arr[], int n, int x){
	for (int i = n-1; i >= 0; --i)
		if(arr[i] == x)
			return i;
	return -1;
}

// O(log N)
int FirstOcc(int arr[], int n, int x){
	int low = 0, high = n-1;
	while(low <= high){
		int mid = (low+high) / 2;
		if(arr[mid] > x)
			high = mid - 1;
		else if(arr[mid] < x)
			low = mid + 1;
		else{
			if(mid == n-1 || arr[mid+1] != arr[mid])
				return mid;
			else
				low = mid + 1;
		}
	}
	return -1;
}