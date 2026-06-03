from typing import List


class Solution:
	def __init__(self):
		self.grid = None
		self.rows = None
		self.columns = None

	def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
		self.grid = grid
		self.rows = len(grid)
		self.columns = len(grid[0])
		max_area = 0

		for r in range(self.rows):
			for c in range(self.columns):
				if self.grid[r][c] == 1:
					max_area = max(max_area, self._dfs(r, c))

		return max_area

	def _dfs(self, r: int, c: int) -> int:
		if r not in range(self.rows) or c not in range(self.columns) or self.grid[r][c] == 0:
			return 0

		#  mark it as 0 to avoid visiting it again
		self.grid[r][c] = 0

		return (1 +
		        self._dfs(r + 1, c) +
		        self._dfs(r - 1, c) +
		        self._dfs(r, c + 1) +
		        self._dfs(r, c - 1))