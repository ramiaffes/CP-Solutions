#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 string s;
 cin>>s;
 long long int n=s.length();
 long long int tot=1<<n;
 string mh="";
 string ans="";
 for(long long int mask=0;mask<tot;mask++){
  mh="";
  for(long long int i=0;i<n;i++){
   long long int f=1<<i;
   if(mask&f){
    mh+=s[i];
    }}
  long long int i=0;
  long long int j=mh.length()-1;
  while((mh[i]==mh[j])and(i<=j)){
   i+=1;
   j-=1;}
  if(j<i) {ans=max(ans,mh);}
  
   }
  cout<<ans<<endl;
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}