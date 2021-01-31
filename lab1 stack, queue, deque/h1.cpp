#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<string> q1, q2;
    int n;
    cin>>n;
    for(int i = 0; i <= n; i++)
    {
        string s;
        getline(cin, s);
        if(s[0] == '-'){
            cout << q2.front() << endl;
            q1.pop_front();
        }
        else if(s[0] == '+')
        q2.push_back(s.substr(2, s.size() - 2));
        else
        q2.push_front(s.substr(2, s.size() - 2));
        
        if(q1.size() > q2.size())
        {
            q2.push_back(q1.front());
            q1.pop_front();
        }
    }
    return 0;
}