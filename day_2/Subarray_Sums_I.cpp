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
  ll n,sum;
  cin>>n>>sum;
  vector<ll>v(n);
  for (ll i = 0; i < n; i++)
  {
    cin>>v[i];
  }
  

ll cu=0,cnt=0;
map<ll,ll>ma;
ma[0]=1;
for (ll i = 0; i < n; i++)
{
    cu+=v[i];

if (ma.find(cu - sum) != ma.end()) {
            cnt += ma[cu - sum];
           
        }
        
        
        ma[cu]++;}
        cout<<cnt<<endl;


    return 0;
}