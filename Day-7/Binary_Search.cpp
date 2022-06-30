#include<bits/stdc++.h>
using namespace std;

// General Implementation
int BinarySearch1(vector<int>& nums, int to_find){
	int low = 0, high = nums.size() - 1, mid;
	while(low <= high){
		mid = low + (high - low) / 2;
		if(nums[mid] == to_find){
			return mid;
		}
		else if(nums[mid] < to_find){
			low = mid + 1;
		} else{
			high = mid - 1;
		}
	}
	return -1;
}

// Recursive
int BinarySearch2(vector<int>& nums, int low, int high, int to_find){
	if(low > high) return -1;
	int mid = (low + high) / 2;
	if(nums[mid] == to_find)
		return mid;
	else if(nums[mid] > to_find)
		return BinarySearch2(nums, low, mid-1, to_find);
	else
		return BinarySearch2(nums, mid+1, high, to_find);
}


// Thats how I implement.
int BinarySearch3(vector<int> & nums, int to_find){
	int low = 0, high = nums.size() - 1, mid;
	while(high - low > 1){
		mid = (high + low) / 2;
		if(nums[mid] < to_find){
			low = mid + 1;
		} else{
			high = mid;
		}
	}
	if(nums[low] == to_find){
		return low;
	}
	if(nums[high] == to_find){
		return high;
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
	// cout << BinarySearch1(nums, to_find);
	cout << BinarySearch2(nums, 0, n-1, to_find);
	// cout << BinarySearch3(nums, to_find);
}