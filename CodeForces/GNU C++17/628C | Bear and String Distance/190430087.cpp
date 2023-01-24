#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<char,long long int>hashing;
map<long long int,long long int>hashing1;
bool test=true;vector<string> out;
map<long long int,bool>vis;
int main()
{
 fast;
long long int n,q,m,l,r,k;
string s,t,p;
cin>>n>>k;
cin>>s;
string res(n,' ');
for(long long int i(0);i<n;i++){
 if(abs(s[i]-'z')<(abs(s[i]-'a'))){
  long long int val1=abs(s[i]-'a');
  long long int val=min(val1,k);
  res[i]=((s[i]-'0')-val+'0');
 k-=val;}
else{
 long long int val1=abs(s[i]-'z');
  long long int val=min(val1,k);
  res[i]=((s[i]-'0')+val+'0');
 k-=val;
 }
}
if(k>0){
 cout<<-1<<endl;}
else{
 cout<<res<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}