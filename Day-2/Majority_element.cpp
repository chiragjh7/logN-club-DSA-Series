#include<bits/stdc++.h>
using namespace std;

// Brute - O(N^2)
int majority_element(int arr[], int n){
	int max_cnt = 0;
	int res = -1;
	for(int i = 0; i < n; i++){
		int curr_cnt = 0;
		for(int j = 0; j < n; j++){
			if(arr[i] == arr[j]){
				curr_cnt++;				
			}
		}
		if(curr_cnt > max_cnt){
			max_cnt = max(curr_cnt, max_cnt);
			res = i;	
		}
	}
	if(max_cnt > n / 2){
		return res;
	}
	return -1;
}

// Better (Hashing) - O(N) but (N) extra space
int majorityElement(int arr[], int n){
	unordered_map<int, int> mpp; // refer STL Library - map(key, values)
	for(int i = 0; i < n; i++){
		mpp[arr[i]]++; // increment count as values of each element as a key.
	}
	for(auto it : mpp){
		if(it.second > n / 2){
			return it.first; // returning the element not index
		}
	}
	return -1;
}

// Efficient - O(N)
int MajorityElement(int arr[], int n){
	int cnt = 0;
	int candidate = 0;
	for(int i = 0; i < n; i++){
		if(cnt == 0){
			candidate = i;
		}
		if(arr[i] == arr[candidate]){
			cnt++;
		} else{
			cnt--;
		}
	}
	
	// check if your candidate is actually the majority element.
	cnt = 0;
	for(int i = 0; i < n; i++){
		if(arr[candidate] == arr[i]){
			cnt++;
		}
	}	
	if(cnt <= n/2){
		candidate = -1;
	}
	return candidate;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}	
	// cout << majority_element(arr, n);
	cout << majorityElement(arr, n);
	cout << MajorityElement(arr, n);
}