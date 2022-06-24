/*
Subarrays - chunks of array in contigious indexs and Order should be maintained.
Subsequence - It is not neccessary to be contigous but order should be maintained.

Quote -Every subarray is a subsequence but every subsequence is not a subarray.
*/

// Brute - O(N ^3), O(1)
int maxSubArraySum(int arr[], int n){
	int maxSum = INT_MIN; // you can assign with zeroth element also or In java, Integer.MAX_VALUE;
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			int currSum = 0;
			for(int k = i; k <= j; k++){
				currSum += nums[k];
			}
			maxSum = max(maxSum, currSum) // In Java, Math.max();
		}
	}
	return maxSum;
}

// O(N ^2), O(1)
int maxSubArraySum(int arr[], int n){
	int maxSum = INT_MIN; // you can assign with zeroth element also or In java, Integer.MAX_VALUE;
	for(int i = 0; i < n; i++){
			int currSum  = 0;
		for(int j = i; j < n; j++){
			currSum += arr[j];
			maxSum = max(maxSum, currSum) // In Java, Math.max();
			}
	}
	return maxSum;
}

// Kadane Algorithm - O(N) -- carry subarray sum as long as it gives a positive sum
int maxSubArraySum(int arr[], int n){
	int sum = 0, maxSum = INT_MIN;
	for(int i = 0; i < n; i++){
		sum += arr[i];
		maxSum = max(sum, maxSum);
		if(sum < 0){
			sum = 0;
		}
	}
	return maxSum;
}
