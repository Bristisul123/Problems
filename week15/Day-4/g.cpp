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

  int n,k,ans = 0;
  string s;  cin>>n>>k>>s;
  string s2 = s;
  map<char,int>mp;
           
  sort(all(s2));
for (int i = 0; i < k ; i++)
    mp[s2[i]]++;

for(int i = 0; i<n ;i++)
{
    if(mp[s[i]]) mp[s[i]]--;
    else cout<< s[i];
}
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
    


