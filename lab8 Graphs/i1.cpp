#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    int n, start, end;
    cin >> n;

    vector<int> from(n, -1);
    vector<int> used(n, 0);
    vector<int> dist(n);

    int arr[100][100];
    int way[100];
    int counter = 0;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> arr[i][j];
        }
    }

    cin >> start >> end;
    --start; --end;

    queue<int> Queue;
    Queue.push(start);

    dist[start] = 0;
    used[start] = 1;

    while (!Queue.empty()){
        int x = Queue.front();
        Queue.pop();

        for (int i = 0; i < n; ++i){
            if (arr[x][i] && !used[i]){
                dist[i] = dist[x] + 1;
                from[i] = x;
                Queue.push(i);
                used[i] = true;
            }
        }
    }

    // if (used[end]){
    //     if(dist[end] == 0) cout << dist[end] << endl;
    //     else{
    //         cout << dist[end] << endl;
    //         vector <int> way;
    //         for(int i = end; i != -1; i = from[i]) way.push_back(i);
    //         reverse (way.begin(), way.end());
    //         for(int i = 0; i < way.size(); ++i) cout << way[i] + 1 << " ";
    //     }
    // }
    // else cout << -1 << endl;
    for (int i = 0; i < n; i++) {
        cout << from[i] << ' ';
    }

    return 0;
}