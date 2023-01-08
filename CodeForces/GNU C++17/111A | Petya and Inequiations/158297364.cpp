#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
int main()
{
 fast; 
 long long int n,x,y;
 string s;
 cin>>n>>x>>y;
 vector<long long int>vect(n);
 if(y>=n){
  for(long long int i(0);i<(n-1);i++){
   vect[i]=1;}
  vect[n-1]=(y-n+1);
 long long int som=0;
 for(auto v:vect){
  som+=power(v,2);}
 if(som>=x){
  for(auto v:vect)cout<<v<<endl;}
 else{
  cout<<-1<<endl;}
 }
else {
 cout<<-1<<endl;
 }
 
 
 
    
    
return 0;}