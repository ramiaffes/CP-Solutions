#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,bool>vis;
map<long long int,vector<long long int>> adj; 
int main()
{
 fast;
 long long int m,n,a,b;
 cin>>n>>m;
 long long int i=0;
 while(i*(i-1)/2<m){
  i++;}
 if(m>=(n/2+(n%2!=0))){cout<<0<<" "<<(n-i)<<endl;}
 else{
  cout<<(n-(m*2))<<" "<<(n-i)<<endl;}
 
  
  
 
 
 
  
 
 
 
 
 
return 0;}