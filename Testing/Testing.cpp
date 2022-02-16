#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    string str;
    int v1=0;
    int i=0;
    getline(cin,str);
    while(str[i]!='+')
    {
        v1=v1*10+str[i]-'0';
        i++;
    }
    cout<<v1<<endl;
    int v2=0;
    v2=v2*10+str[0]-'0';
    cout<<v2<<endl;

    return 0;
}