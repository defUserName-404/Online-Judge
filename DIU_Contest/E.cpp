#include <bits/stdc++.h>

using namespace std;

template <typename... T>
void scan(T &...args) {
    ((cin >> args), ...);
}

template <typename... T>
void print(T... args) {
    ((cout << args), ...);
}

class Solution_To_Problem {
    // variables
    int edge, destination;

    void bfs(int source, int destination, int edge) {
        vector<int> level, adj_list[edge];
        vector<bool> visited;
        queue<int> q;

        level = {0};
        visited = {false};

        q.push(source);
        level[source] = 0;
        visited[source] = true;

        while (!q.empty()) {
            int current = q.front();
            q.pop();

            for (auto node : adj_list[current]) {
                if (!visited[node]) {
                    visited[node] = true;
                    q.push(node);

                    //Setting the level of each node with an increment in the level of parent node
                    level[node]
                }
            }
        }
    }

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(edge, destination);

        bfs(1, destination, edge);
    }
} Solution;

int main() {
#ifdef LOCAL_DEBUG_IN
    print("INPUT:\n");
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}