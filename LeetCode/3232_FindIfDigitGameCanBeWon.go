package LeetCode

func canAliceWin(nums []int) bool {
	singleDigitNumSum, doubleDigitNumSum := 0, 0
	for i := 0; i < len(nums); i++ {
		if isSingleDigitNum(nums[i]) {
			singleDigitNumSum += nums[i]
		} else {
			doubleDigitNumSum += nums[i]
		}
	}
	return singleDigitNumSum != doubleDigitNumSum
}

func isSingleDigitNum(num int) bool {
	return num/10 > 0
}
