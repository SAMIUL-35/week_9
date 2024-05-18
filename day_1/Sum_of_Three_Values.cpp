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
vector<pair<int,int>>index(n);
for (ll i = 0; i < n; i++)
{
    cin>>v[i];
    index[i]={v[i],i+1};
}

sort(index.begin(), index.end());

    bool ok=false;
    for (int i = 0; i < n; ++i) {
        int a = index[i].first;
        int target = sum - a;
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int b = index[left].first;
            int c = index[right].first;
            int current_sum = b + c;

            if (current_sum == target) {
                ok=true;
               cout<< index[i].second<<" "<< index[left].second<<" "<< index[right].second<<endl;
               return 0;
            } else if (current_sum < target) {
                ++left;
            } else {
                --right;
            }
        }
    }
if (!ok) {
        cout << "IMPOSSIBLE" << endl;
    } 
    

    return 0;
}