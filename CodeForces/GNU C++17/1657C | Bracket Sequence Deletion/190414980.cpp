#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
int main()
{
 fast; 
 string s;
 long long int n,b,x,y,t;
    cin>>t;
    while(t--){
  cin>>n;
  cin>>s; 
  long long int res=0;
  long long int i=0;
  long long int j=i+1;
  while(j<n){
   if(((s[i]=='(')or(s[j]==')'))){
    i=j+1;
    
    j+=2;
    res++;if(i>=n)break;
    }
   else{
    j+=1;
    }}
 cout<<res<<" "<<(n-i)<<endl;}
 
    
    
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}