#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
int main()
{
 fast; 
 string s;
 long long int n,b,x,y,t;
    cin>>s;
    if(s.length()<3){
  cout<<-1<<endl;}
 else{
  long long int ans=-1e9;
  for(long long int j(0);j<(s.length()-2);j++){
   for(long long int d(j+1);d<(s.length()-1);d++){
    if((s[j+1]=='0')and((d-j)!=1))continue;
    if((s[d+1]=='0')and((s.length()-d-1)!=1))continue;
    if((s[0]=='0')and((j+1)!=1))continue;
    if(((j+1)>7)or((d-j)>7)or((s.length()-d-1)>7))continue;
    long long int val1=stoll(s.substr(0,j+1));
    long long int val2=stoll(s.substr(j+1,d-j));
    long long int val3=stoll(s.substr(d+1,s.length()-d-1));
    if((val1>1e6)or(val2>1e6)or(val3>1e6))continue;
    ans=max(ans,val1+val2+val3);
    }}
 if(ans==-1e9)cout<<-1<<endl;
 else cout<<ans<<endl;}
 
    
    
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}