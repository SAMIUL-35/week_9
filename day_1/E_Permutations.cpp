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
vector<int>v;
for (int i = 1; i <= n; i++)
{
    if(i%2==0)
    {
        v.push_back(i);
    }
}
for (int i = 1; i <=n ; i++)
{
    if(i%2==1)
    {
        v.push_back(i);
    }
}
bool ok= true;
for (int i = 0; i < n-1; i++)
{
    
    if(abs(v[i]-v[i+1])==1)
    {
        ok=false;
         break;
    }
}
if(ok==false)cout<<"NO SOLUTION"<<endl;
else 
{
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;}

    return 0;
}