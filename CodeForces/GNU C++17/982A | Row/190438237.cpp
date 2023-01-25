#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,bool>vis;
int main()
{
 fast;
long long int n;
 string s;
 cin>>n;
 cin>>s;
 if(n==1){
  if(s=="0")cout<<"No"<<endl;
  else cout<<"YES"<<endl;
  }
 else if(n==2){
  if((s=="00")or(s=="11"))cout<<"No"<<endl;
  else cout<<"Yes"<<endl;}
 else{
 long long  int i=0;
 while((i<n)and(s[i]=='0')){
  i++;}
 bool test=true;
 if(i>1){
  cout<<"No"<<endl;}
 else{
  long long int j=n-1;
  while((j>=0)and(s[j]=='0')){
  j--;}
  if(j<(n-2)){
   cout<<"No"<<endl;
   }
  else{long long int val=0;
   for(long long int d(i);d<=j;d++){
   if(s[d]=='1'){
    val=0;
    }
   else{val++;
    if((val>=3)){test=false;break;}}}
   if(test==true){
   for(long long int d(i);d<j;d++){
    if((s[d]==s[d+1])and(s[d]=='1')){
     test=false;break;}}
  }
   if(test==false)cout<<"No"<<endl;
   else cout<<"Yes"<<endl;
   }
  }}
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}