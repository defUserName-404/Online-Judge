package LeetCode

func reverseDegree(s string) int {
	res := 0
	for i := 0; i < len(s); i++ {
		idx := int('z' - s[i] + 1)
		res += (i + 1) * idx
	}
	return res
}
