#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int  t,n;
 cin>>t;
 while(t--){
  cin>>n;
  unordered_map<long long int,long long int>mymap;
  vector<long long int>vect(n);
  long long int som=0;
  for(long long int i(0);i<n;i++)cin>>vect[i];
  vector<long long int>result(n);
  for(long long int i(0);i<n;i++){
   result[i]=vect[i]-i;
   mymap[result[i]]++;}
  for(auto it=mymap.begin();it!=mymap.end();it++){som+=(it->second*(it->second-1)/2);}
  cout<<som<<endl;
  
  
  
  
  
  }
 
 
 
  
  
  
  
 
  
  
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}