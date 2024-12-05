package LeetCode

func maxContainers(n int, w int, maxWeight int) int {
	val, maxPossibleVal := maxWeight/w, n*n
	if maxPossibleVal > val {
		return val
	}
	return maxPossibleVal
}
