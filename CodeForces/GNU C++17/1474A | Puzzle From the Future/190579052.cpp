#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int t,n,d,k;
 cin>>t;
 while(t--){
  cin>>n;
  string ch;
  cin>>ch;
  string ch1(n,' ');
  ch1[0]='1';
  for(long long int i(1);i<(n);i++){
   if((ch[i]!=ch[i-1])and(ch[i-1]=='1')and(ch1[i-1]=='0')){
    ch1[i]='0';
    }
   else if(ch[i]!=ch[i-1]){
    ch1[i]='1';
    }
   else if((ch[i]==ch[i-1])and(ch1[i-1]=='0')){
    ch1[i]='1';
    }
   else{
    ch1[i]='0';
    }
    
    
    
    }
  cout<<ch1<<endl;
 }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}