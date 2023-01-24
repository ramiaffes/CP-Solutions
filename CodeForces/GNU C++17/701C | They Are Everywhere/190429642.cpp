#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
map<long long int,long long int>dp;
const long long M=1000000007;
int main()
{
 fast;
 long long int k,t,n;
 string s;
 string s1;
 cin>>n;
 cin>>s;
 map<char,vector<long long int>>res;
 for(long long int i(0);i<n;i++){
  res[s[i]].push_back(i);}
long long int ans1=1e9;long long int ans=0;
bool test=true;
for(auto v:res){
 auto it=lower_bound(v.second.begin(),v.second.end(),0);
 if(it==v.second.end()){test=false;break;}
 ans=max(ans,*it);
 }
ans1=min(ans1,ans+1);
long long int i=1;
while(i<n){
 auto it=lower_bound(res[s[i-1]].begin(),res[s[i-1]].end(),i);
  if(it==res[s[i-1]].end()){test=false;break;}
  ans=max(ans,*it);
 if(test==false)break;
 ans1=min(ans1,ans-i+1);
 i+=1;}
cout<<ans1<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}