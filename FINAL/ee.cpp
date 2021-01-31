#include <bits/stdc++.h>
using namespace std;
queue<int> q;
const int N = 1e4;
int x[N], y[N], dist[N];

void bfs(int v, int n)
{
    q.push(v);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < n; i++)
        {
            int diff = (abs(x[v] - x[i]) + abs(y[v] - y[i]));
            if (dist[i] > max(dist[v], diff))
            {
                q.push(i);
                dist[i] = max(dist[v], diff);
            }
        }
    }
    cout << dist[n--];
}

void solve(int n)
{
    for (int i = 0; i < n; i++)
    {
        dist[i] = 1e9;
        cin >> x[i] >> y[i];
    }
    dist[0] = 0;
}

int main()
{
    int n;
    cin >> n;
    solve(n);
    bfs(0, n);
    return 0;
}