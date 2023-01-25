#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int n,t;
 long long int a,b,c;
 cin>>t;
 while(t--){
 cin>>a>>b>>c>>n;
 if(((a+b+c+n)%3==0)and(((a+b+c+n)/3)>=a)and(((a+b+c+n)/3)>=b)and(((a+b+c+n)/3)>=c))cout<<"YES"<<endl;
 else cout<<"NO"<<endl;}
 
 
  
  
  
 
 
 
 
 
  
  
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}