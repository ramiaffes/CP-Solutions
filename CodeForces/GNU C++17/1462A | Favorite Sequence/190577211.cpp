#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <long long int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
bool comp(pair<int,int>t,pair<int,int> x){
 return t.second<=x.second;}
 
int main()
{
 
 fast; 
 long long int t,n;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  
  for(long long int i(0);i<n;i++){
   cin>>vect[i];}if(n==1){
   cout<<vect[0]<<endl;}
   else{
  for(long long int i(0);i<(n/2);i++){
   cout<<vect[i]<<" "<<vect[n-i-1]<<" ";}
   if(n%2==1){
   cout<<vect[n/2]<<" ";}
   cout<<endl;}
  
  
  
 }
  
 
 
 
 return 0;
}