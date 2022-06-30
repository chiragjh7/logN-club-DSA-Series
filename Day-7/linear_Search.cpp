#include<bits/stdc++.h>
using namespace std;

// O(N) on an average. theta(N) on worst.
int linearSearch(vector<int>& nums, int to_find){
	for(int i = 0; i < nums.size(); i++){
		if(nums[i] == to_find){
			return i;
		}
	}
	return -1;
}

int main(){
	int n;
	cin >> n;
	vector<int> nums(n);
	for(int i = 0; i < n; i++){
		cin >> nums[i];
	}	
	int to_find;
	cin >> to_find;
	cout << linearSearch(nums, to_find);
}