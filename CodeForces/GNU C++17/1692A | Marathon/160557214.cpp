#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<long long int,vector<long long int>>adj;
map<long long int,bool>vis;
long long int som=0;
 
int main()
{
 fast; 
 long long int n,t,a,b,c,d;
 cin>>t;
 while(t--){
  cin>>a>>b>>c>>d;
  vector<long long int>vect(3);
  long long int som=0;
  if(a<d)som++;
  if(a<b)som++;
  if(a<c)som++;
  cout<<som<<endl;
  }
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}