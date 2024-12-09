package LeetCode

func kthSmallest(matrix [][]int, k int) int {
	n := len(matrix)
	low, high := matrix[0][0], matrix[n-1][n-1]
	for low < high {
		mid := low + (high-low)/2
		if countLessEqual(matrix, mid, n) < k {
			low = mid + 1
		} else {
			high = mid
		}
	}
	return low
}

func countLessEqual(matrix [][]int, target, n int) int {
	row, col := n-1, 0
	count := 0
	for row >= 0 && col < n {
		if matrix[row][col] <= target {
			count += row + 1
			col++
		} else {
			row--
		}
	}
	return count
}
