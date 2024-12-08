package LeetCode

import "math"

func subarraySum(nums []int) int {
	n := len(nums)
	sum := 0
	for i := 0; i < n; i++ {
		for j := int(math.Max(0, float64(i-nums[i]))); j <= i; j++ {
			sum += nums[j]
		}
	}
	return sum
}
