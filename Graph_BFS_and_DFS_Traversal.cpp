#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

class Graph {
public:
    vector<int> adjlist[9];
    char nodes[9] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'J', 'k'};

    void createGraph() {
        adjlist[0].push_back(5); adjlist[0].push_back(2); adjlist[0].push_back(1);
        adjlist[1].push_back(0); adjlist[1].push_back(2); adjlist[1].push_back(6);
        adjlist[2].push_back(0); adjlist[2].push_back(1); adjlist[2].push_back(3);
        adjlist[2].push_back(4); adjlist[2].push_back(5); adjlist[2].push_back(6);
        adjlist[3].push_back(2); adjlist[3].push_back(4); adjlist[3].push_back(5); adjlist[3].push_back(7);
        adjlist[4].push_back(2); adjlist[4].push_back(3); adjlist[4].push_back(7); adjlist[4].push_back(8);
        adjlist[5].push_back(0); adjlist[5].push_back(2); adjlist[5].push_back(3);
        adjlist[6].push_back(1); adjlist[6].push_back(2); adjlist[6].push_back(3); adjlist[6].push_back(8);
        adjlist[7].push_back(3); adjlist[7].push_back(4); adjlist[7].push_back(8);
        adjlist[8].push_back(4); adjlist[8].push_back(6); adjlist[8].push_back(7);
    }

    void bfs(int start) {
        queue<int> q;
        bool visited[9] = {false};
        q.push(start);
        visited[start] = true;

        while (!q.empty()) {
            int v = q.front();
            q.pop();
            cout << nodes[v] << " ";
            for (int neighbor : adjlist[v]) {
                if (!visited[neighbor]) {
                    q.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
        cout << endl;
    }

    void dfs(int start) {
        stack<int> s;
        bool visited[9] = {false};
        s.push(start);
        visited[start] = true;

        while (!s.empty()) {
            int v = s.top();
            s.pop();
            cout << nodes[v] << " ";
            for (int neighbor : adjlist[v]) {
                if (!visited[neighbor]) {
                    s.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
        cout << endl;
    }
};

int main() {
    Graph g;
    g.createGraph();

    cout << "BFS Traversal: ";
    g.bfs(0);

    cout << "DFS Traversal: ";
    g.dfs(0);

    return 0;
}
