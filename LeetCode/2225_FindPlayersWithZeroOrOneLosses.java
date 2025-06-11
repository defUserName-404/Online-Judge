import java.util.*;

class Solution {
    public List<List<Integer>> findWinners(int[][] matches) {
        Map<Integer, Integer> playerLosses = new HashMap<>();
        for (int[] match : matches) {
            playerLosses.put(match[0], playerLosses.getOrDefault(match[0], 0));
            playerLosses.put(match[1], playerLosses.getOrDefault(match[1], 0) + 1);
        }
        List<Integer> oneLossPlayers = new ArrayList<>();
        List<Integer> zeroLossPlayers = new ArrayList<>();
        for (Map.Entry<Integer, Integer> entry : playerLosses.entrySet()) {
            if (entry.getValue() == 0) {
                zeroLossPlayers.add(entry.getKey());
            } else if (entry.getValue() == 1) {
                oneLossPlayers.add(entry.getKey());
            }
        }
        Collections.sort(oneLossPlayers);
        Collections.sort(zeroLossPlayers);
        return List.of(zeroLossPlayers, oneLossPlayers);
    }


}
