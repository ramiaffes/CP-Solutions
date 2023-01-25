#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int  n;
 long long int t;
cin>>t;
while(t--){
  cin>>n;
  stringstream ss;
      string ch;
      ss<<n;
      ss>>ch;
     long long int i=0;
     while((i<n)and(ch[0]==ch[i])){
   i++;}
  if((ch.length()==1)or(i==ch.length())or((ch[0]-'0')<(ch[i]-'0'))){
      cout<<(ch[0]-'0'+(ch.length()-1)*9)<<endl;}
     else{
   cout<<(ch[0]-'0'-1+(ch.length()-1)*9)<<endl;}
      
  
  
   
  
    
  
  
  
  
 
 
   }
  
  
  
  
  
  
 
 
   
  
  
  
  
  
  
     
  
  
  
 
  
  
  
  
  
  
  
 
  
 
  
  
   
  
  
  
  
 
   
  
  
 
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}