#include <iostream>
#include <queue>

using namespace std;

queue<pair<int, int> > q;
int used[1000];

int f(int a, int b){
    q.push(make_pair(a, 0));
    used[a] = a;

    while (!q.empty()){
        int x = q.front().first;
        int d = q.front().second;

        if (x == b){
            return d;
        }
        if (used[x + 1] == 0){
            q.push(make_pair(x + 1, d + 1));
            used[x + 1] = x;
        }
        if (used[x * 2] == 0){
            q.push(make_pair(x * 2, d + 1));
            used[x * 2] = x;
        }
        if (used[x / 2] == 0){
            q.push(make_pair(x / 2, d + 1));
            used[x / 2] = x;
        }
        if (x - 1 >= 0 && used[x - 1] == 0){
            q.push(make_pair(x - 1, d + 1));
            used[x - 1] = x;
        }

        q.pop();
    }
    return 0;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << f(a, b) << endl;

    vector<int> result;
    result.push_back(b);
    int c = b;
    while (used[c] != c){ // c = 12, 6, 3, 2
        c = used[c];
        result.push_back(c);
    }

    for (int i = result.size() - 1; i >= 0; i--){
        cout << result[i] << ' ';
    }
    return 0;
}