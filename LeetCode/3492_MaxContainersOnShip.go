package LeetCode

func maxContainers(n int, w int, maxWeight int) int {
	res := 0
	for i := 0; i < n*n; i++ {
		if maxWeight-w >= 0 {
			res++
			maxWeight -= w
		} else {
			break
		}
	}
	return res
}
