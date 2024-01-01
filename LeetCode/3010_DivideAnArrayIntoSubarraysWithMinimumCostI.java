import java.util.Arrays;

/*
* You are given an array of integers nums of length n.
* The cost of an array is the value of its first element. For example, the cost of [1,2,3] is 1 while the cost of [3,4,1] is 3.
* You need to divide nums into 3 disjoint contiguous sub-arrays.
? Return the minimum possible sum of the cost of these sub-arrays.
 */

/*
* SOLUTION:
* If we have to divide the array into 3 parts and take the first element of each, it is clear that
* we should take the first element and the next two smallest elements of the array. 
 */

class Solution {

	public int minimumCost(int[] nums) {
		Arrays.sort(nums,  1, nums.length);

		return nums[0] + nums[1] + nums[2];
	}

} 
