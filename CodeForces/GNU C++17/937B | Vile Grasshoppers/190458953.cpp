#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int p,y;
 cin>>p>>y;
long long int i;
bool test=true;
if(y<=p)test=false;
else{
for(i=y;i>p;i--){
 test=true;
 for(long long int j=2;j<=p;j++){
  if(j>sqrt(i))break;
  if(i%j==0){test=false;break;}}
 if(test==true)break;
}}
if(test==true)cout<<i<<endl;
else cout<<-1<<endl;
 
 
 
  
  
  
  
 
  
  
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}