#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,x,y,z,q;
    vector<int>v;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cin>>q;
    v.erase(v.begin()+q-1);
    N=N-1;
    cin>>z>>y;
    v.erase(v.begin()+z-1,v.begin()+y-1);
    cout<<v.size()<<endl;
    N=N-abs(z-y);
    for(i=0;i<N;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}