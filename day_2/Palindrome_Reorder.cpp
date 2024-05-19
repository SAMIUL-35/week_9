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
  string s;
  cin>>s;
  map<char,int>m;

  for (int i = 0; i < s.size(); i++)
  {
    m[s[i]]++;
  }
  
int cnt=0;
list<char> q;
for(auto x:m)
{
    if(x.second%2==1)
    {cnt++;
     if(x.second==1)
        {
 q.push_front(x.first);
        }
        else 
        {
             q.push_front(x.first);
            int k=x.second/2;
            while (k--)
        {
           q.push_front(x.first);
           q.push_back(x.first) ;
        }
        }
    }
}

if(cnt>1)cout<<"NO SOLUTION"<<endl;
else 
{
for(auto x:m)
{
    if(x.second%2==0)
    
  
    
      {int k=x.second/2;
        while (k--)
        {
           q.push_front(x.first);
           q.push_back(x.first) ;
        }
        
    } 
    
}
while (!q.empty())
{
   cout<<q.front();
   q.pop_front();
}

}
    return 0;
}