#include <iostream>
#include <queue>

using namespace std;

int a[10][10];
pair<int, int> c[10][10];

queue<pair<int, int> > q;

int dx[8] = {2, 2, -2, -2, 1, -1, 1, -1};
int dy[8] = {1, -1, 1, -1, 2, 2, -2, -2};

bool check(int x, int y){
    return (x >= 1 && x <= 8 && y >= 1 && y <= 8 && a[x][y] == 0);
}

int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    a[x1][y1] = 1;
    q.push(make_pair(x1, y1));

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;

        for (int i = 0; i < 8; i++){
            if (check(x + dx[i], y + dy[i])){
                q.push(make_pair(x + dx[i], y + dy[i]));
                a[x + dx[i]][y + dx[i]] = a[x][y] + 1;
                
            }
        }
        q.pop();
    }

    for (int i = 1; i <= 8; i++){
        for (int j = 1; j <= 8; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    

    return 0;
}