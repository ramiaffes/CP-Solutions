#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
map<pair<long long int,long long int> ,bool> vis;
map<pair<long long int,long long int> ,long long int> dist;
bool test=false;
int main()
{
 fast; 
 long long int a,b,c,d,e,g,n;
 cin>>n;
 cin>>a>>b;
 cin>>c>>d;
 cin>>e>>g;
 if((((a>=min(c,e))and(a<=max(c,e))))or(((b>=min(d,g))and(b<=max(g,d)))))cout<<"NO"<<endl;
 else if((a-e)==(b-g))cout<<"NO"<<endl;
 else{
  cout<<"YES"<<endl;}
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}