#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int n,t;
 string s;
 cin>>t;
 while(t--){
  cin>>n;
  cin>>s;
  long long int som1=0;
  long long int som2=0;
  for(long long int i(0);i<n;i++){
   if(s[i]=='1')som1++;
   else som2++;}
  if((som2==1)or(som2==2)){
   cout<<"NO"<<endl;}
  else{
   cout<<"YES"<<endl;
   vector<char>vect(n);
   vector<vector<char>>vect1(n,vect);
   for(long long int i(0);i<n;i++){
    if(s[i]=='1'){
     for(long long int j(0);j<n;j++){
      if(i==j){
      vect1[i][j]='X';}
      else {vect1[i][j]='=';
      vect1[j][i]='=';}}
     }
    else{
     vect1[i][i]='X';
     long long int d=i+1;
     while((d<n)and(s[d]=='1')){
      d++;
      }
     if(d!=n){
     vect1[i][d]='+';
     vect1[d][i]='-';
     
     }
     else{
       d=0;
      while(s[d]=='1')d++;
      vect1[i][d]='+';
      vect1[d][i]='-';}}
     }
    for(long long int i(0);i<n;i++){
   for(long long int j(0);j<n;j++){
    if((vect1[i][j]!='X')and(vect1[i][j]!='-')and(vect1[i][j]!='+')and(vect1[i][j]!='='))vect1[i][j]='=';}}
  for(long long int i(0);i<n;i++){
   for(long long int j(0);j<n;j++){
    cout<<vect1[i][j];}
   cout<<endl;}}
 
  
  
   
  }
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}