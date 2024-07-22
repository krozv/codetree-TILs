#include <iostream>
#include <tuple>
#include <vector>
using namespace std;

#define MAX_N 100

int graph[MAX_N + 1][MAX_N + 1];
bool visited[MAX_N + 1];

int dist[MAX_N + 1];

int main() {
    // 정점의 수 n, 간선의 수 m
    int n, m;
    cin >> n >> m;
    vector<tuple<int, int, int> > edges = {};

    for (int i=1; i<=m; i++){
        int x, y, z;
        cin >> x >> y >> z;
        edges.push_back(make_tuple(x, y, z));
        graph[x][y] = z;
    }
    for(int i = 1; i <= n; i++)
            dist[i] = (int)1e9;
    
    dist[1] = 0;
    for (int i=1; i<=n; i++) {
        int min_index = -1;
        for(int j=1; j<=n; j++){
            if (visited[j])
                continue;
            if (min_index == -1 || dist[min_index] > dist[j])
                min_index = j;
        }
        visited[min_index] = true;

        for (int j=1; j<=n; j++) {
            if (graph[min_index][j] == 0)
                continue;
            dist[j] = min(dist[j], dist[min_index] + graph[min_index][j]);
        }
    }

    for (int i=2; i<=n; i++)
        cout << dist[i] << endl;
    return 0;
}