package LeetCode

func minOperations(nums []int, k int) int {
	sum := 0
	for _, i := range nums {
		sum += i
	}
	return sum % k
}
