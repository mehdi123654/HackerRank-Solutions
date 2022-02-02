#include <bits/stdc++.h>
using namespace std;
/*template <class ForwardIterator, class T>
ForwardIterator lower_bound (ForwardIterator first, ForwardIterator last, const T& val)
{
  ForwardIterator it;
  iterator_traits<ForwardIterator>::difference_type count, step;
  count = distance(first,last);
  while (count>0)
  {
    it = first; step=count/2; advance (it,step);
    if (*it<val) {                 // or: if (comp(*it,val)), for version (2)
      first=++it;
      count-=step+1;
    }
    else count=step;
  }
  return first;
}*/

int main()
{
  int N,x,Q,y;
  vector<int> v;
  vector<int>::iterator it,j;
  
  cin>>N;
  for(int i=0;i<N;i++)
  {
    cin>>x;
    v.push_back(x);
  }
  cin>>Q;
  for(int i=0;i<Q;i++)
  {
    j=v.begin();
    cin>>y; 
    it=lower_bound(v.begin(),v.end(),y);
    advance(j,it-v.begin());
    if(*j==y)
    cout<<"Yes "<<it-v.begin()+1<<endl;
    else
    cout<<"No "<<it-v.begin()+1<<endl;
  }
    return 0;
}