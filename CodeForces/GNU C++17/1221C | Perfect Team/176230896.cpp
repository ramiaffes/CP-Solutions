#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
 map<pair<long long int,long long int>,bool>vis;
 long long int som=0;
int main()
{
 fast; 
 long long int q,c,m,x;
 cin>>q;
 while(q--){
  cin>>c>>m>>x;
  long long int val=min(c,m);
  if((c+m+x)>=3*val){
   cout<<min(val,c+m+x-2*val)<<endl;
   }
  else{
   val=((c+m+x)/3);
   cout<<min(val,c+m+x-2*val)<<endl;}
 }
 
 
  
  
 
 
 
 
 
 
    
return 0;} 