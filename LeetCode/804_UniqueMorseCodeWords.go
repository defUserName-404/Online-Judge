package LeetCode

var morse = [26]string{
	".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.",
	"--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..",
}

func uniqueMorseRepresentations(words []string) int {
	m := make(map[string]bool)
	for _, word := range words {
		morseCode := ""
		for _, char := range word {
			morseCode += morse[char-'a']
		}
		m[morseCode] = true
	}
	return len(m)
}
