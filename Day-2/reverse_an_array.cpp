#include<bits/stdc++.h>
using namespace std;

// O(N)-two pointer approach
void reverse(int arr[], int n){
	int low = 0, high = n-1;
	while(low < high){
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
		low++;
		high--;
	}
}

/* rather than using temporary variable and then swapping you can use inbuilt swap.
   syntax: swap(element_1, element_2);
*/


int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}	
	reverse(arr, n);
	for(int i : arr){
		cout << i << " ";
	}	
}