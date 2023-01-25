#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
 
int main()
{
 fast; 
 long long int t;
 cin>>t;
 string s;
 while(t--){
  cin>>s;
  long long int n=s.length();
  long long int som=0;
  for(long long int i(1);i<(n);i++){
   if( s[i-1]==s[i] or (i>1 and s[i-2]==s[i]) ){ 
       som++;
       s[i]=0;
   }}
  
cout<<som<<endl;  
  
}
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}