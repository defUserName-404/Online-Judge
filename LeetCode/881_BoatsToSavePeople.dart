class Solution {
  int numRescueBoats(List<int> peopleWeight, int limit) {
    int boatCount = 0;
    peopleWeight.sort();
    int left = 0;
    int right = peopleWeight.length - 1;
    while (left <= right) {
      int currentWeight = peopleWeight[left] + peopleWeight[right];
      if (currentWeight > limit) {
        right--;
      } else {
        left++;
        right--;
      }
      boatCount++;
    }
    return boatCount;
  }
}
