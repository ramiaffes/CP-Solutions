#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
const long long M=1000000007;
 
int main()
{
 fast;
 long long int r,g,b;
 cin>>r>>g>>b;
 long long int val0=r/3+g/3+(b/3);
 long long int val=0;
 long long int val1=0;
 long long int val2=0;
if(min(r,min(g,b))>=1){
 val=1+(r-1)/3+(g-1)/3+(b-1)/3;}
if(min(r,min(g,b))>=2){
 val1=2+(r-2)/3+(g-2)/3+(b-2)/3;}
if(min(r,min(g,b))>=3){
val2=3+(r-3)/3+(g-3)/3+(b-3)/3;}
cout<<(max(max(val,val1),max(val2,val0)))<<endl;
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}