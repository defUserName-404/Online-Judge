class Solution {
  List<List<int>> groupThePeople(List<int> groupSizes) {
    List<List<int>> result = [];
    Map<int, List<int>> groups = {};
    for (int i = 0; i < groupSizes.length; i++) {
      int groupSize = groupSizes[i];
      List<int> group = groups[groupSize] ?? [];
      group.add(i);
      groups[groupSize] = group;
      if (group.length == groupSize) {
        result.add(group);
        groups.remove(groupSize);
      }
    }
    return result;
  }
}
