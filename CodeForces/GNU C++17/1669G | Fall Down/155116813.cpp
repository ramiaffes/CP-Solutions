#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int t,n,m;
 cin>>t;
 while(t--){
  cin>>n>>m;
  vector<char>vect1(m);
  vector<vector<char>>vect(n,vect1);
  for(long long int i(0);i<n;i++){
   for(long long int j(0);j<m;j++){
    cin>>vect[i][j];}}
 for(long long int j(0);j<m;j++){
  long long int i=0;
  long long int som=0;
   while(i<n){
    if(vect[i][j]=='*'){
     som++;}
   else if(vect[i][j]=='o'){
    long long int d=i-1;
   if(d>=0){
    while(som!=0){
     vect[d][j]='*';
     som--;
     d--;}
   while((d>=0)and(vect[d][j]!='o')){
    vect[d][j]='.';
     d--;}}
    
    }
    i++;}
   if(som!=0){
    i--;
    while(som!=0){
     vect[i][j]='*';
     som--;
     i--;}
    while((i>=0)and(vect[i][j]!='o')){
    vect[i][j]='.';
     i--;}}}
  for(long long int i(0);i<n;i++){
   for(long long int j(0);j<m;j++){
    cout<<vect[i][j];}
   cout<<endl;}
  cout<<endl;
 
 
  }
 
return 0;}  