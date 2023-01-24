#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>adj;
map<long long int,bool>vis;
long long int som=0;
long long gcd(long long a, long long b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
int main()
{
 fast; 
 long long int t,n,x;
string s;
 cin>>n>>x;
 vector<long long int>vect(n);
 map<long long int,long long int>vis;
 map<long long int,long long int>hashing;
 for(long long int i(0);i<n;i++){cin>>vect[i];hashing[vect[i]]++;
  if(vect[i]!=(vect[i]&x)){
   vis[vect[i]&x]+=1;}}
 long long int val=-1;
 bool test=false;
 for(long long int i(0);i<n;i++){
  if(hashing[vect[i]]>=2){test=true;val=0;break;}}
 if(test==false){
 for(long long int i(0);i<n;i++){
  if(vis[vect[i]]>=1){test=true;val=1;break;}}}
if(test==false){
 for(auto v:vis){
  if(vis[v.first]>=2){val=2;test=true;break;}}
}
cout<<val<<endl;
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}