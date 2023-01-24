#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
int main()
{
 fast; 
 string s;
 long long int n,b,x,y,t;
    cin>>t;
    while(t--){
  cin>>n>>b>>x>>y;
  n++;
  long long int som=0;
  vector<long long int>vect(n);
  for(long long int i(1);i<n;i++){
   if((vect[i-1]+x)<=b){
    vect[i]=vect[i-1]+x;
    }
   else{
    vect[i]=vect[i-1]-y;}
   }
  for(long long int i(0);i<n;i++){som+=vect[i];}
  cout<<som<<endl;}
 
    
    
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}