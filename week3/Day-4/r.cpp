#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define nl "\n"
#define lower(x) transform(x.begin(), x.end(), x.begin(), ::tolower)
#define upper(x) transform(x.begin(), x.end(), x.begin(), ::toupper)
typedef unsigned long long  ull;
using namespace std;


void solve()
{ 
    int n,ans = 0, mx = 0; cin>>n;
   
   vector<int>a(n);
   map<int,int>mp;
   for(int i = 0; i<n; i++){
     cin>>a[i];
   }

 for(int i = n-1 ;i>=0;i--)
 {
    mp[a[i]]++;
    //cout<<mp[a[i]]<<" ";
    if(mp[a[i]]>=2) {
        ans = i+1;
        break;
}
 }
   cout<<ans<<nl;
    
}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

    int T=1; cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
    