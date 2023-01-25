#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char,string>hashing;
map<string,bool>vis;
 long long int power(long long int i,long long int j){
  long long int p=1;
  for(long long int d(0);d<j;d++){
   p=p;
   p*=(i);
  }
 return p;}
int main()
{
fast;
long long int n;
cin>>n;
vector<string>vect(n);
for(long long int i(0);i<n;i++)cin>>vect[i];
reverse(vect.begin(),vect.end());
for(auto v:vect){
 if(vis[v]==0){cout<<v<<endl;vis[v]=1;}}
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}