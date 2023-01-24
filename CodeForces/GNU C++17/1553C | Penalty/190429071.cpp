#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
const long long M=1000000007;
 
int main()
{
 fast;
 long long int n,m,d,t;
 cin>>t;
 string s;
 while(t--){
  cin>>s;
  vector<long long int>res;
  for(long long int i(0);i<s.length();i++){
   if(s[i]=='?'){
    res.push_back(i);}}
 long long int tot=1<<res.size();
 long long int ans=1e9;
 for(long long int mask=0;mask<tot;mask++){
  for(long long int i=0;i<res.size();i++){
   long long int f=1<<i;
   if(mask&f){
    s[res[i]]='0';
    }
   else{
    s[res[i]]='1';}}
  long long int res1=0;
  long long int res2=0;
  long long int res3=0;
  long long int i=0;
  while((i<(s.length()))){
   long long int val1=0;
   long long int val2=0;
   for(long long int j(i);j<s.length();j++){
    if(j%2==0)val1++;
    else val2++;}
   if((val1<(res2-res1))or(val2<(res1-res2)))break;
   if(i%2==0)res1+=(s[i]=='1');
   else res2+=(s[i]=='1');
   res3+=(s[i]=='0');
   i++;
   }
  ans=min(ans,res1+res2+res3);
  
   }
  cout<<ans<<endl;
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}