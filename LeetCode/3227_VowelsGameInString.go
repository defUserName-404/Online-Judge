package LeetCode

func doesAliceWin(s string) bool {
	vowels := map[rune]bool{'a': true, 'e': true, 'i': true, 'o': true, 'u': true}
	for i := 0; i < len(s); i++ {
		if vowels[rune(s[i])] {
			return true
		}
	}
	return false
}
