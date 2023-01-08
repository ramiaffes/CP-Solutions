#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
int main()
{
 fast;
 
 long long int n,k,a,b,t;
 cin>>t;
 while(t--){
  cin>>n;
  vector<string>vect(n);
  for(long long int i(0);i<n;i++)cin>>vect[i];
  map<char,vector<long long int>>res;
  for(long long int i(0);i<n;i++){
   res[vect[i][0]].push_back(i);}
 long long int val=0;
 long long int som33=0;
 for(long long int i(0);i<26;i++){
  char ord=i+97;
  som33=0;
  if(res[ord].size()==0)continue;
  map<char,long long int>res2;
  for(long long int d(0);d<res[ord].size();d++){
   res2[vect[res[ord][d]][1]]++;
   }
  for(long long int j(0);j<26;j++){
   char ord1=j+97;
   som33+=res2[ord1];}
  for(long long int j(0);j<26;j++){char ord1=j+97;
   som33-=res2[ord1];
   val+=res2[ord1]*som33;
   }
  
  }
  
  map<char,vector<long long int>>res31;
  for(long long int i(0);i<n;i++){
   res31[vect[i][1]].push_back(i);}
 som33=0;
 for(long long int i(0);i<26;i++){
  char ord=i+97;
  som33=0;
  if(res31[ord].size()==0)continue;
  map<char,long long int>res2;
  for(long long int d(0);d<res31[ord].size();d++){
   res2[vect[res31[ord][d]][0]]++;
   }
  for(long long int j(0);j<26;j++){
   char ord1=j+97;
   som33+=res2[ord1];}
  for(long long int j(0);j<26;j++){char ord1=j+97;
   som33-=res2[ord1];
   val+=res2[ord1]*som33;
   }
 
  
 }cout<<val<<endl;}
 
return 0;}  