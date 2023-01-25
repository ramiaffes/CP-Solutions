#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const long int N=1e6;
 
 
int main()
{
 fast;
   long long int k,a,b;
   cin>>k>>a>>b;
   if(((a/k+b/k)==0)or((k-1)*(b/k)<(a%k))or((k-1)*(a/k)<(b%k))){
    cout<<-1<<endl;}
 else{
  cout<<(a/k+b/k)<<endl;}
   
  
   
   
 
 
 
 
 
 
return 0;}