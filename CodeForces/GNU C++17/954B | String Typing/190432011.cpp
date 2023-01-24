#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int ans=1e4;
int main()
{
 fast;
 
 long long int n,x,t;
 string s;
 cin>>n;
 cin>>s;
 long long int i=0;
 long long int val=1;
 while(i<n){
  if((n-i)%2==0){
 string s1= s.substr(0,(n-i)/2);
 string s2=s.substr((n-i)/2,(n-i)/2);
 if(s1==s2){val=(n-i)/2;break;}
 }
  i++;}
cout<<(n-val+1)<<endl;
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}