import java.util.Arrays;
import java.util.Set;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

class Solution {

	public int arithmeticTriplets(int[] nums, int diff) {
		Set<Integer> numsSet = Arrays.stream(nums)
									 .boxed()
									 .collect(Collectors.toSet());
		return (int) IntStream.of(nums)
							  .filter(num -> IntStream.of(num - diff, num + diff)
													  .allMatch(numsSet::contains))
							  .count();
	}

}
