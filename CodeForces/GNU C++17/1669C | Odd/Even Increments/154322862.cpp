#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int n,k,a,b,t;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++)cin>>vect[i];
  set<long long int>se1;
  set<long long int>se2;
  for(long long int i(0);i<n;i++){
   if(i%2==0){
    se1.insert(vect[i]%2);}
  else{se2.insert(vect[i]%2);}}
 if((se1.size()>=2)or(se2.size()>=2)){
  cout<<"NO"<<endl;}
 else{
  cout<<"YES"<<endl;}}
 
 
return 0;}  