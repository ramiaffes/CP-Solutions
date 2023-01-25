#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
int main()
{
 fast; 
 long long int c,r;
 cin>>c>>r;
 vector<char>vect1(c);
 vector<vector<char>>vect(r,vect1);
 bool res=true;
 for(long long int i(0);i<c;i++){
  for(long long int j(0);j<r;j++){
   cin>>vect[j][i];}}
 for(long long int i(0);i<r;i++){
  for(long long int j(0);j<c;j++){
   if(vect[i][j]!='.'){
   long long int d=i;
   while((d<r)and(vect[d][j]==vect[i][j])){
    d++;}
   if((d<r)and(vect[d][j]!='.')){res=false;break;}
   d=j;
   while((d<c)and(vect[i][d]==vect[i][j])){
    d++;}
   if((d<c)and(vect[i][d]!='.')){res=false;break;}
   }}
   if(res==false)break;}
  if(res==false)cout<<"NO"<<endl;
  else {
   cout<<"YES"<<endl;
   for(long long int i(0);i<c;i++){
  for(long long int j(0);j<r;j++){
   if(vect[j][i]=='.')cout<<'D';
   else
   cout<<vect[j][i];}
cout<<endl;  }}
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}