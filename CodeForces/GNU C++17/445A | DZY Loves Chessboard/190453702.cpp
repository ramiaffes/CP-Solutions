#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int n,m;
 cin>>n>>m;
 vector<char>vect1(m);
 vector<vector<char>>vect(n,vect1);
 vector<vector<char>>result(n,vect1);for(long long int i(0);i<n;i++){
 for(long long int j(0);j<m;j++){
  
   cin>>vect[i][j];
  }
  }
int temp1=1;
int temps=1;
for(long long int i(0);i<n;i++){
 temp1=1;
 if(temps==1){
 for(long long int j(0);j<m;j++){
  if(temp1==1){
   result[i][j]='W';}
  else{
   result[i][j]='B';}
  temp1=1-temp1; 
  }}
 else{
  for(long long int j(0);j<m;j++){
  if(temp1==1){
   result[i][j]='B';}
  else{
   result[i][j]='W';}
  temp1=1-temp1;
   
  }
  }
 temps=1-temps;
  }
  
 for(long long int i(0);i<n;i++){
  for(long long int j(0);j<m;j++){
  if(vect[i][j]=='-')result[i][j]='-';}}
  for(long long int i(0);i<n;i++){
  for(long long int j(0);j<m;j++){cout<<result[i][j];}
  cout<<endl;}
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}