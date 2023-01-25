#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int gcd(long long int a,long long int b){
 if(b==0)return a;
 else return gcd(b,a%b); }
int main()
{
 fast; 
 long long int p;
 cin>>p;
long long int som=0;
for(long long int x(1);x<p;x++){
 if(gcd(x,(p-1))==1)som++;
}
cout<<som<<endl;
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}