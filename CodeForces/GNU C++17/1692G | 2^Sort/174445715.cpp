#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
long long int power(long long int n,long long int f){
 long long int p=1;
 for(long long int i=0;i<f;i++){
  p*=n;}
 return p;}
int main()
{
 fast; 
 int n,k,t;
 cin>>t;
 while(t--){
  cin>>n>>k;
  long long int som2=0;
  vector<long long int>vect(n);
  long long int som=0;
  for(long long int i(0);i<n;i++)cin>>vect[i];
  for(long long int i(0);i<(n-1);i++){
   if(vect[i]<2*vect[i+1]){
    som++;
    }
   else{
    som=0;
    }
   if(som==k){
    som2++;
    som--;}
  }
 cout<<som2<<endl;
 }
    
return 0;} 