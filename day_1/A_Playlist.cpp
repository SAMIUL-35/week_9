#include <bits/stdc++.h>
using namespace std;

int main() {
 
   

    int n;
    cin >> n;
     vector<int>v(n);
     for (int i = 0; i < n; i++)
     {
        cin>>v[i];
     }
     map<int,int>m;
    int l=0,r=0,ma=0,cu=0;
    while (r<n)
    {
       if(m[v[r]]==0)
       {
        m[v[r]]++;
        cu++;
        ma=max(ma,cu);
        r++;
       }
       else 
       {
        m[v[l]]--;
        cu--;
        // ma=max(ma,cu);
        l++;
       }
       
    }
    cout<<ma<<endl;

    return 0;
}
