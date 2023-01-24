#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
int main()
{
 fast; 
 string s;
 long long int n;
    cin>>n;
    cin>>s;
    long long int som1=0;
    long long int som2=0;
    vector<long long int>res;
    for(long long int i(0);i<n;i++){
  if(s[i]=='W')som1++;
  else som2++;}
 if((som1%2!=0)and(som2%2!=0)){
  cout<<-1<<endl;}
 else{
  if(som1%2==1){if(s[n-1]!='W'){
   if(s[n-2]=='B'){
   s[n-2]='W';}
   else{ s[n-2]='B';}
   s[n-1]='W';
   res.push_back(n-1);}}
  else if(som2%2==1){
   if(s[n-1]!='B'){
   if(s[n-2]=='W'){
   s[n-2]='B';}
   else{ s[n-2]='W';}
   s[n-1]='B';
   res.push_back(n-1);}}
  for(long long int i(0);i<(n-1);i+=2){
   long long int d=i+1;
   while(s[d]!=s[i]){
    d++;}
   for(long long int j(d-1);j>=(i+1);j--){
    swap(s[j],s[j+1]);
    res.push_back(j+1);}
   }
  for(long long int i(0);i<(n-1);i+=2){
   if(s[i]!=s[n-1]){
    s[i]=s[n-1];
    s[i+1]=s[n-1];
   res.push_back(i+1);}}
  cout<<res.size()<<endl;
  for(auto v:res)cout<<v<<" ";
  
  }
    
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}