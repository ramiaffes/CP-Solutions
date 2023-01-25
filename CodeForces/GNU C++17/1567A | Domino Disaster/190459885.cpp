#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int t,n;
 string s;
 cin>>t;
 while(t--){
  cin>>n;
  cin>>s;
 string m(s.begin(),s.end());
 for(long long int i(0);i<n;i++){
  if(s[i]=='U')m[i]='D';
  else if(s[i]=='D')m[i]='U';
  }
 cout<<m<<endl;
 
 }
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}