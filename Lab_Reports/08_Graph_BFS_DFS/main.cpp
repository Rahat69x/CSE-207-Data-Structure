#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

class Graph {
public:
    vector<int> adjlist[9];
    char nodes[9] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'J', 'k'};

    void creatGraph() {
        adjlist[0].push_back(5);
        adjlist[0].push_back(2);
        adjlist[0].push_back(1);

        adjlist[1].push_back(0);
        adjlist[1].push_back(2);
        adjlist[1].push_back(6);

        adjlist[2].push_back(0);
        adjlist[2].push_back(1);
        adjlist[2].push_back(3);
        adjlist[2].push_back(4);
        adjlist[2].push_back(5);
        adjlist[2].push_back(6);

        adjlist[3].push_back(2);
        adjlist[3].push_back(4);
        adjlist[3].push_back(5);
        adjlist[3].push_back(7);

        adjlist[4].push_back(2);
        adjlist[4].push_back(3);
        adjlist[4].push_back(7);
        adjlist[4].push_back(8);

        adjlist[5].push_back(0);
        adjlist[5].push_back(2);
        adjlist[5].push_back(3);

        adjlist[6].push_back(1);
        adjlist[6].push_back(2);
        adjlist[6].push_back(3);
        adjlist[6].push_back(8);

        adjlist[7].push_back(3);
        adjlist[7].push_back(4);
        adjlist[7].push_back(8);

        adjlist[8].push_back(4);
        adjlist[8].push_back(6);
        adjlist[8].push_back(7);
    }

    void bfs(int u) {
        queue<int> q;
        bool visited[9] = {false};
        q.push(u);
        visited[u] = true;
        while (!q.empty()) {
            int v = q.front();
            q.pop();
            cout << nodes[v] << ",";
            for (int element : adjlist[v]) {
                if (!visited[element]) {
                    q.push(element);
                    visited[element] = true;
                }
            }
        }
    }

    void dft(int u) {
        stack<int> s;
        bool visited[9] = {false};
        s.push(u);
        visited[u] = true;
        while (!s.empty()) {
            int v = s.top();
            s.pop();
            cout << nodes[v] << ",";
            for (int element : adjlist[v]) {
                if (!visited[element]) {
                    s.push(element);
                    visited[element] = true;
                }
            }
        }
    }
};

int main() {
    Graph g;
    g.creatGraph();
    cout << "bft: ";
    g.bfs(0);
    cout << endl;
    cout << "dft: ";
    g.dft(0);
    cout << endl;
    return 0;
}
