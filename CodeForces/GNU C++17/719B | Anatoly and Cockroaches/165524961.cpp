#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int,long long int>adj;
long long int ans=-1e5;
 
long long int som=0;
int main()
{
 fast; 
 long long int n,x,y;
 string s;
 cin>>n;
 cin>>s;
 map<char,long long int>hashing;
 long long int ans=1e9;
 for(long long int i(0);i<n;i++){
  if((s[i]=='r')and(i%2==1)){
   hashing['r']++;}
  else if((s[i]=='b')and(i%2==0)){
   hashing['b']++;
   }}
 ans=min(ans,(abs(hashing['b']-hashing['r']))+min(hashing['b'],hashing['r']));
 hashing.clear();
 for(long long int i(0);i<n;i++){
  if((s[i]=='b')and(i%2==1)){
   hashing['b']++;}
  else if((s[i]=='r')and(i%2==0)){
   hashing['r']++;
   }}
 
 ans=min(ans,(abs(hashing['b']-hashing['r']))+min(hashing['b'],hashing['r']));
 cout<<ans<<endl; 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}