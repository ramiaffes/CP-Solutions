#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>adj;
long long int som=0;
long long int val=0;
 bool isPrime( long long int n)
{
    if (n <= 1)  return false;
 
    for (long long int i = 2; i *i<=n; ++i)
        if (n % i == 0)
            return false;
 
    return true;
}
 
int main()
{
 fast; 
 long long int n;
 cin>>n;
 if((isPrime(n))or(n==1)){
  cout<<1<<endl;
  cout<<0<<endl;}
 else{
 for(long long int i(2);i*i<=n;i++){
  if(n%i==0){
   if((isPrime(n/i))){
    cout<<2<<endl;
    break;}
  else{
   cout<<1<<endl;
   long long int val=0;
   for(long long int d(2);d*d<=(n/i);d++){
    if((n/i)%d==0){val=d;break;}}
   cout<<(i*val)<<endl;
   break;}}}}
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}