#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int n;
 string s;
 cin>>n;
 map<long long int,bool>vis;
long long int som=0;
for(long long int i(1);i<=(n);i++){
 for(long long int j(i);j<=n;j++){
  if(((i^j)<=n)and((i^j)>=1)){
   if(((i+j)>(i^j))and(((i^j)+i)>j)and(((i^j)+j)>i)){
    som++;}}}}
cout<<(som/3)<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}