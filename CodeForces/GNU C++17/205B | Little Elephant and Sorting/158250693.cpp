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
 string s;
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 long long int val=0;
 long long int som=0;
 for(long long int i(0);i<(n-1);i++){
  if((vect[i+1]+val)<vect[i]){
   som+=vect[i]-(vect[i+1]+val);
   val+=(vect[i]-(vect[i+1]+val));
   vect[i+1]=vect[i];}
  else{
   vect[i+1]=vect[i+1]+val;}}
 cout<<som<<endl;
 
    
    
 
    
    
return 0;}