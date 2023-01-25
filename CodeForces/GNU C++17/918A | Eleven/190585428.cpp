#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is_member(int i,int n){
 long long int res1=1;
 long long int res2=1;
 long long int res=1;
 long long int var;
 while ((i!=res) and(res<=n)){
  res=res1+res2;
  var=res1;
  res1=res;
  res2=var;
  }
 if(res==i){
  return true;
  }
 else{
  return false;}
 }
int main() {
 fast;
 long long int n;
 cin>>n;
 string ch(n,' ');
 for(int i(0);i<n;i++){
  if(is_member(i+1,n)==true){
   ch[i]='O';}
  else{
   ch[i]='o';}}
 cout<<ch<<endl;
 
 
 
  
  
   
  
  
  
 
 
  
 
 
 
    
    
 
    
   
    
    
    return 0;
}