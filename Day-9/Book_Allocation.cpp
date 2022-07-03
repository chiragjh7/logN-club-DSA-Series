#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& arr, int n, int m, int mid){
	int student_cnt = 1;
	int page_sum = 0;
	
	for(int i = 0; i < n; i++){
		if(page_sum + arr[i] <= mid){
			page_sum += arr[i];
		} else{
			student_cnt++;
			if(student_cnt  > m || arr[i] > mid){
				return false;
			}
			page_sum = arr[i];
		}
	}
	return true;
}

int allocateBooks(vector<int>& arr, int n, int m){
	int st = 0;
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}
	int en = sum;
	int ans = -1;
	int mid = st + (en-st) / 2;
	
	while(st <= en){
		if(isPossible(arr, n, m, mid)){
			ans = mid;
			en = mid - 1;
		} else{
			st = mid + 1;
		}
		mid = st + (en-st)/2;
	}
	return ans;
}

int main(){
	int n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int m;
	cin >> m;
	cout << allocateBooks(arr, n, m);	
}