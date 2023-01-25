#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int  n,x;
 cin>>n>>x;
 long long int som=0;
 long long int val=floor(sqrt(x));
 for(long long int i(1);i<=min(n,val);i++){
  if((x%i==0)and((x/i)<=n)){
   if(i==(x/i))som+=1;
   else som+=2;}}
 cout<<som<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}