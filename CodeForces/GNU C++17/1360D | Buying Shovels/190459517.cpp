#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int t,n,k;
 cin>>t;
 while(t--){
  cin>>n>>k;
  vector<long long int>arr;
  for(long long int i(1);i<=sqrt(n);i++){
   if(n%i==0){
   arr.push_back(-i);
   arr.push_back(-n/i);}
   }
  sort(arr.begin(),arr.end());
  auto lo=lower_bound(arr.begin(),arr.end(),-k);
  cout<<(n/(-*(lo)))<<endl;
  
  
  
  }
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}