#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    int Q, a, y;
    string x;
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        cin >> a;
        cin>>x;
        if (a == 1)
        {   
            cin >> y;
           m[x]+=y;
        }
        else if (a == 2)
        {
            m.erase(x);
        }
        else
        {
            map<string,int>::iterator it;
            it=m.find(x);
            if(it!=m.end())
            {
                cout<<m[x]<<endl;
            }
            else
            cout<<0<<endl;
        }
    }
    return 0;
}