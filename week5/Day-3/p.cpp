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
  int n, cnt = 0 , sum = 0; cin>>n;
     
  int k = 1;
  while(k*2 <n)
      k*=2;

for(int i = n-1 ; i>=k;i--)
     cout<<i<<" ";
  for(int i = 0 ;i<k;i++)
         cout<<i<<" ";
     cout<<nl;     
 
     
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
    


