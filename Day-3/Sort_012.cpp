
// Dutch National Flag Algorithm - O(N)
void sort_012(int arr[], int n){
	int low = 0;
	int high = n - 1;
	int mid = 0;
	while(mid <= high){
		switch(arr[mid]){
			case 0: swap(arr[mid++], arr[low++]);
			break;
			case 1: mid++;
			break;
			case 2: swap(arr[mid], arr[high--]);
			break;
		}
	}
}