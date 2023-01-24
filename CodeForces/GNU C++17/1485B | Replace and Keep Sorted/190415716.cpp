#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>adj;
map<long long int,bool>vis;
long long int som=0;
 
int main()
{
 fast; 
 long long int n,q,k,l,r;
 cin>>n>>q>>k;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 vector<long long int>dp(n);
 dp[0]=0;
 for(long long int i(1);i<n;i++){
  dp[i]=dp[i-1];
  dp[i]+=vect[i]-vect[i-1]-1;}
 for(long long int i(0);i<q;i++){
  cin>>l>>r;
  cout<<(((dp[r-1]-dp[l-1])*2)+(vect[l-1]-1)+(k-vect[r-1]))<<endl;
 
  }
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}