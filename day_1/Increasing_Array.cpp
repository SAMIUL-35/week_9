#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);


int main ()

{
op();
  int n;
  cin>>n;
  vector<int>v(n);
  for (int i = 0; i < n; i++)
  {
   cin>>v[i];
  }
  long long m=0;
  for (int i = 1; i < n; i++)
  {
    if(v[i]<v[i-1])
    {
        m+=v[i-1]-v[i];
        v[i]=v[i-1];
    }
  }
  
cout<<m<<endl;

    return 0;
}