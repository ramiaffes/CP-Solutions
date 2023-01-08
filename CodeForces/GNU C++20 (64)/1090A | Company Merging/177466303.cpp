#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 long long int n,m;
 cin>>n;
vector<pair<long long int,long long int>>res;
 long long int ans1=0;
 long long int som=0;
 for(long long int i(0);i<n;i++){
 long long int ans=0;
 cin>>m;
 vector<long long int>vect(m);
 for(long long int i(0);i<m;i++){cin>>vect[i];ans=max(ans,vect[i]);}
 ans1=max(ans1,ans);
 res.push_back(make_pair(m,ans));
 
}
for(auto v:res){
 som+=(ans1-v.second)*v.first;}
 cout<<som<<endl;
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}