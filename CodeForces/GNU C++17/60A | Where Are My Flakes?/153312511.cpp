#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast;
 
 long long int n,m;
 cin>>n>>m;
 string s1,s2,s3,s4,s5;
 bool test=true;
 long long int j=n;
 long long int i=1;
 for(long long int d(0);d<m;d++){
 cin>>s1;
 cin>>s2;
 cin>>s3;
 cin>>s4; 
 cin>>s5;
 if(test==true){
 long long int val=stoll(s5);
 if(s3=="left"){
  j=min(j,val-1);}
 else{i=max(i,val+1);}
 if(i>j){test=false;}}}
 if(test==false){
  cout<<-1<<endl;}
 else{
  cout<<(j-i+1)<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}