class Solution {
  int minMovesToSeat(List<int> seats, List<int> students) {
    seats.sort();
    students.sort();
    int moves = 0;
    for (int i = 0; i < seats.length; i++) {
      moves += (seats[i] - students[i]).abs();
    }
    return moves;
  }
}
