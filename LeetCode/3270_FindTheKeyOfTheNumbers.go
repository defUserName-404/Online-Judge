package LeetCode

import (
	"fmt"
	"strconv"
)

func generateKey(num1 int, num2 int, num3 int) int {
	s1 := fmt.Sprintf("%04d", num1)
	s2 := fmt.Sprintf("%04d", num2)
	s3 := fmt.Sprintf("%04d", num3)
	result := ""
	for i := 0; i < 4; i++ {
		d1 := int(s1[i] - '0')
		d2 := int(s2[i] - '0')
		d3 := int(s3[i] - '0')
		minDigit := min(min(d1, d2), d3)
		result += fmt.Sprintf("%d", minDigit)
	}
	resInt, _ := strconv.Atoi(result)
	return resInt
}

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}
