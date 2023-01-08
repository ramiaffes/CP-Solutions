#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=50;
 
int main()
{
 fast; 
 long long int n,t;
 cin>>t;
 string s;
 map<long long int,vector<long long int>>adj;
 while(t--){
  cin>>n;
  cin>>s;
  if((s.find('<')==string::npos)or(s.find('>')==string::npos)){
   cout<<n<<endl;
   }
  else{
   long long int som=0;
   map<long long int,bool>vis;
   for(long long int i(0);i<n;i++){
    if(s[i]=='-'){vis[i]=1;vis[(i+1)%n]=1;}}
   for(long long int i(0);i<n;i++){
    if(vis[i]==1)som++;}
   cout<<som<<endl;
   }
  
  }
 
 
 
 
 
return 0;}