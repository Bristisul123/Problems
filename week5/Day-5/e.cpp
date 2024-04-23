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

  int n,l , r, x,ans = 0; cin>>n>>l>>r>>x;
  vector<int>a(n);
  for(int i=0;i<n;i++)
    cin>>a[i];
 
 for(int i = 0 ;i < (1<<n) ;i++)
 {
   int mn = INT_MAX, mx = INT_MIN , sum = 0, cnt = 0;
   for(int j = 0 ;j < n;j++)
   {
      if(i & (1<<j))
      {
         sum += a[j];
        mn = min( mn, a[j]);
        mx = max(mx, a[j]);
      }
   } 
   if (sum >= l && sum <= r && (mx - mn) >= x) 
        ans ++;
   
 }
  
  cout<< ans << nl;
}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

    int T=1; //cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}