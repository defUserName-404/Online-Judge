import java.util.ArrayList;
import java.util.List;

class Solution {

    private final List<List<Integer>> subsetsList = new ArrayList<>();

    public List<List<Integer>> subsets(int[] nums) {
        addNewSubset(new ArrayList<>(), nums, 0);
        return subsetsList;
    }

    private void addNewSubset(List<Integer> current, int[] nums, int start) {
        subsetsList.add(new ArrayList<>(current));
        for (int i = start; i < nums.length; i++) {
            current.add(nums[i]);
            addNewSubset(current, nums, i + 1);
            current.removeLast();
        }
    }
}