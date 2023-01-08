#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int N=1e9; 
int main()
{
 fast;
long long int n,t,k;
cin>>n;
long long int x=-2*1e9;
long long int y=2*1e9;
string s;
long long int num;
char ch;
for(long long int i(0);i<n;i++){
 cin>>s>>num>>ch;
 if(ch=='Y'){
  if(s==">="){
   x=max(x,num);}
  else if(s==">"){
   x=max(x,num+1);}
  else if(s=="<"){
   y=min(y,num-1);}
  else{
   y=min(y,num);}}
 else{
  if(s==">="){
   y=min(y,num-1);}
  else if(s==">"){
   y=min(y,num);}
  else if(s=="<"){
   x=max(x,num);}
  else{
   x=max(x,num+1);}
  }
 if(x>y)break;}
if(x>y){
 cout<<"Impossible"<<endl;}
else{
 cout<<x<<endl;}
 
 
 
 
 
   return 0;}