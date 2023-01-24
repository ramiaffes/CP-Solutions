#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
vector<char>res;
const long long M=1000000007;
 
int main()
{
 fast;
 long long int n,m;
 string s;
 string t;
 cin>>n;
 vector<long long int>vect(n);
 vector<long long int>vect1(n);
 long long int res=1e9;
 for(long long int i(0);i<n;i++)cin>>vect[i];
 for(long long int j(0);j<n;j++)cin>>vect1[j];
for(long long int i(1);i<(n-1);i++){
 long long int val=vect[i];
 long long int ans=1e9;
 for(long long int j(i+1);j<n;j++){
  if(vect[j]>val){
   ans=min(ans,vect1[j]);}}
 long long int ans1=1e9;
 for(long long int j(0);j<i;j++){
  if(vect[j]<val){
   ans1=min(ans1,vect1[j]);}
  }
 res=min(res,ans1+ans+vect1[i]);}
if(res==1e9)cout<<-1<<endl;
else cout<<res<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}