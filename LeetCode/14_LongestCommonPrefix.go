package LeetCode

import "strings"

func longestCommonPrefix(strs []string) string {
	longestCommonPrefixSb := strings.Builder{}
	for i := 0; i < len(strs[0]); i++ {
		for j := 1; j < len(strs); j++ {
			if i >= len(strs[j]) || strs[0][i] != strs[j][i] {
				return longestCommonPrefixSb.String()
			}
		}
		longestCommonPrefixSb.Write([]byte{strs[0][i]})
	}
	return longestCommonPrefixSb.String()
}
