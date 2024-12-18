package LeetCode

type NeighborSum struct {
	numGrid [][]int
	pos     map[int][2]int
}

func Constructor(grid [][]int) NeighborSum {
	pos := make(map[int][2]int)
	for i := 0; i < len(grid); i++ {
		for j := 0; j < len(grid[i]); j++ {
			pos[grid[i][j]] = [2]int{i, j}
		}
	}
	return NeighborSum{
		numGrid: grid,
		pos:     pos,
	}
}

func (neighborSum *NeighborSum) AdjacentSum(value int) int {
	sum := 0
	n := len(neighborSum.numGrid)
	if position, ok := neighborSum.pos[value]; ok {
		row, col := position[0], position[1]
		dirs := [][2]int{{-1, 0}, {1, 0}, {0, -1}, {0, 1}}
		for _, d := range dirs {
			nr, nc := row+d[0], col+d[1]
			if nr >= 0 && nr < n && nc >= 0 && nc < n {
				sum += neighborSum.numGrid[nr][nc]
			}
		}
	}
	return sum
}

func (neighborSum *NeighborSum) DiagonalSum(value int) int {
	sum := 0
	n := len(neighborSum.numGrid)
	if position, ok := neighborSum.pos[value]; ok {
		row, col := position[0], position[1]
		dirs := [][2]int{
			{-1, -1},
			{-1, 1},
			{1, -1},
			{1, 1},
		}
		for _, d := range dirs {
			nr, nc := row+d[0], col+d[1]
			if nr >= 0 && nr < n && nc >= 0 && nc < n {
				sum += neighborSum.numGrid[nr][nc]
			}
		}
	}
	return sum
}

/**
 * Your NeighborSum object will be instantiated and called as such:
 * obj := Constructor(grid);
 * param_1 := obj.AdjacentSum(value);
 * param_2 := obj.DiagonalSum(value);
 */
