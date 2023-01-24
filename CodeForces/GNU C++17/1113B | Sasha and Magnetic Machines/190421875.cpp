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
 
    for (long long int i = 2; i *i<n; ++i)
        if (n % i == 0)
            return false;
 
    return true;
}
 
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 long long int som=0;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  som+=vect[i];}
 sort(vect.begin(),vect.end());
 long long int ans=som;
 for(long long int i(0);i<n;i++){
  if(i==0){
   for(long long int d(2);d*d<=vect[i];d++){
   if(vect[i]%d==0){
    ans=min(ans,som-(d-1)*vect[i]/d+(d-1)*vect[1]);
    }
   }}
  else{
  for(long long int d(2);d*d<=vect[i];d++){
   if(vect[i]%d==0){
    ans=min(ans,som-(d-1)*vect[i]/d+(d-1)*vect[0]);
    }}}}
  cout<<ans<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}