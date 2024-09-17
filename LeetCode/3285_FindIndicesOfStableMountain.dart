class Solution {
  List<int> stableMountains(List<int> height, int threshold) {
    List<int> result = [];
    for (int i = 1; i < height.length; i++) {
      if (height[i - 1] > threshold) {
        result.add(i);
      }
    }
    return result;
  }
}
