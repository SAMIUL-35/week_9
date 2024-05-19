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
  int t;
  cin>>t;
  while (t--)
  {
    int a,b;
    cin>>a>>b;
   
    // b=max(a,b);
    int c=a+b;
    if(a>b)
    {
        swap(a,b);

    }
    // cout<<c<<endl;
    if(c%3==0 and 2 * a >= b  )
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
  }
  


    return 0;
}