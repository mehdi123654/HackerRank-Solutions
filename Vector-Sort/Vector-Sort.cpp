#include <bits/stdc++.h>
using namespace std;
int main()
{   int N,i,x;
    vector<int>v;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(i=0;i<N;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}