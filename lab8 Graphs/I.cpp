#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, y;
    cin >> n;

    queue<int> q;
    vector<int> from(n, -1);
    vector<int> used(n, 0);
    vector<int> dist(n);

    int arr[100][100];

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            cin >> arr[i][j];

    cin >> x >> y;
    x--; y--;

    q.push(x);

    dist[x] = 0;
    used[x] = 1;

    while (!q.empty()){
        int tmp = q.front();

        for (int i = 0; i < n; i++)
            if (arr[tmp][i] && !used[i]) {
                used[i] = 1;
                dist[i] = dist[tmp] + 1;
                from[i] = tmp;
                q.push(i);
            }
        
        q.pop();
    }

    if (used[y]){        
        if(dist[y] == 0) 
            cout << dist[y] << endl;
        
        else {
            cout << dist[y] << endl;
            vector <int> way;
            for(int i = y; i != -1; i = from[i]) 
                way.push_back(i);
            
            for(int i = way.size() - 1; i >= 0; i--) 
                cout << way[i] + 1 << " ";
        }
    }
    else cout << -1 << endl;

    return 0;
}