#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool sortbysecasc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.second<b.second;
}
int main() {
 fast;
    long long int n,t;
    cin>>t;
    while(t--){
    cin>>n;
    vector<long long int>vect2(n,1);
    vector<vector<long long int>>vect(n,vect2);
    if(n!=3){
    if(n%2==0){
  for (long long int i(0);i<n;i++){
   vect[i][i]=(103-n+1);}}
 else{
  for (long long int i(0);i<n;i++){
   vect[i][i]=(107-n-2);}
  for (long long int i(0);i<n;i++){
   if(i==0){
    vect[i][n-1]=4;}
    else{
   vect[i][i-1]=4;}}
  }}
 for (long long int i(0);i<n;i++){
  for (long long int j(0);j<n;j++){
   cout<<vect[i][j]<<" ";}
   cout<<endl;}
    
   }
  
 
 
   
   
  
  
   
    
    
 
    
   
    
    
    return 0;
}