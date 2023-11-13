import java.util.stream.Collectors;

class Solution {

  private String sortString(String string) {
    return string.chars()
        .sorted()
        .mapToObj(String::valueOf)
        .collect(Collectors.joining());
  }

  public boolean isAnagram(String string1, String string2) {
    return sortString(string1)
        .equals(sortString(string2));
  }

}
