/*Given a sorted array of N integers, where every element except one appears exactly twice and one element appears only once. Search Single Element in a sorted array.

 N = 9, array[] = {1,1,2,3,3,4,4,8,8} 
 OP: 2

O(N)
As every number in the array repeats twice and only one number occurs once, we can take advantage of the XOR(^) operator. These are two properties of the XOR operator which will be helpful.
If p is a number then,
p^p=0
p^0=p
 */
int findSingleElement(vector < int > & nums) {            
	int n = nums.size();
	int elem = 0;
	for (int i = 0; i < n; i++) {
		elem = elem ^ nums[i];
	}
	return elem;
}

//Using Binary Search
  int findSingleElement(vector < int > & nums) 
        {
            int low = 0;
            int high = n - 2;
        
            while (low <= high) {
                int mid = (low + high) / 2;
                
                if (mid % 2 == 0) {
                    if (nums[mid] != nums[mid + 1]) 
                    //Checking whether we are in right half

                        high = mid - 1; //Shrinking the right half
                    else
                        low = mid + 1; //Shrinking the left half
                } else {

                    //Checking whether we are in right half
                    if (nums[mid] == nums[mid + 1]) 
                        high = mid - 1; //Shrinking the right half
                    else
                        low = mid + 1; //Shrinking the left half
                }
            }

            return nums[low];
        }




