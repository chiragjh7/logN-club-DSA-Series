#include<bits/stdc++.h>
using namespace std;

// brute approach - O(N^2)
int largest_element(int arr[], int n){
	int res = 0;
	for(int i = 0; i < n; i++){
		bool flag = true;
		for(int j = 0; j < n; j++){
			if(arr[j] > arr[i]){
				flag = false;
				break;
			}
		}
		if(flag == true){
			res = i;
			break;
		}
	}
	return res; 
}

// Efficient - O(N)
int largestElement(int arr[], int n){
	int res = 0;
	for(int i = 1; i < n; i++){
		if(arr[i] > arr[res]){
			res = i;
		}
	}
	return res;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}	
	cout << largest_element(arr, n);	
	// cout << largestElement(arr, n);	
}