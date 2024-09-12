class Solution {
  int numberOfEmployeesWhoMetTarget(List<int> hours, int target) {
    return hours.where((hour) => hour >= target).length;
  }
}
