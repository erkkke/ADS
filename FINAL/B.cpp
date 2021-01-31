#include <bits/stdc++.h>
using namespace std;

int a, b;
queue<int> q;
vector<int> used(100000), d(100000, -1), ans;

void way(int b) {
    if (b == a)
        return;
    way(d[b]);
    ans.push_back(b);
}

int main() {
    cin >> a >> b;

    if (a == b) {
        cout << 0;
        return 0;
    }

    used[a] = 1;
    q.push(a);
    while (!q.empty()) {
        int c = q.front();
        if (c == b)
            break;
        q.pop();

        int f = c * 2, s = c - 1;
        
        if (!used[f]) {
            used[f] = 1;
                d[f] = c;
            q.push(f);
        }
        if (s > 0 && !used[s]) {
            used[s] = 1;
            d[s] = c;
            q.push(s);
        }
    }
    way(b);

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << ' ';
    return 0;
}