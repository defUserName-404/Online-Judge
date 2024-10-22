class Solution {
  List<List<int>> minimumAbsDifference(List<int> array) {
    int minimumDifference = double.maxFinite.toInt();
    List<List<int>> result = [];
    array.sort();
    for (int i = 0; i < array.length - 1; i++) {
      int currentDifference = array[i + 1] - array[i];
      if (currentDifference > minimumDifference) continue;
      if (currentDifference < minimumDifference) {
        minimumDifference = currentDifference;
        result.clear();
      }
      var pair = array.getRange(i, i + 2);
      result.add([pair.first, pair.last]);
    }
    return result;
  }
}
