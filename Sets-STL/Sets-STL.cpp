#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    set<int>::iterator it;

    int Q, x, y;
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        cin >> y;
        cin >> x;
        if (y == 1)
        {
            s.insert(x);
        }
        else if (y == 2)
        {
            s.erase(x);
        }
        else
        {
            
            it=s.find(x);
            if(it!=s.end())
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;

        }
    }
    return 0;
}