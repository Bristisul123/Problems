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

  int n,ans = 0; cin>>n;
vector<set<int>> a(n);
set<int> s,tmp;
  for(int i=0;i<n;i++)
    {
        int k; cin>>k;
        for(int j = 0; j<k; j++)
        {
            int x; cin>>x;
            s.insert(x);
            a[i].insert(x);
        }
      }

    for(auto i : s)
    {
     set<int> tmp;  
        for(auto j : a)
        {
           if(j.count(i) == 0)
               tmp.insert(j.begin(),j.end());
        }
        ans = max(ans, (int)tmp.size());
    }  
   cout << ans <<nl;
 
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
    


