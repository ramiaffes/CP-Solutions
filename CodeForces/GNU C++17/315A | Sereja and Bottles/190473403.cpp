#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast; 
 long long int  n;
 cin>>n;
 map<long long int,bool>vis;
 vector<long long int>vect(n);
 vector<long long int>vec(n);
 map<long long int,long long int>m2;
 map<long long int,long long int>m3;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  cin>>vec[i];
  m2[vec[i]]++;
  m3[vect[i]]++;}
 long long int som=0;
 long long int som4=0;
 for(long long int i(0);i<n;i++){
  if((vec[i]!=vect[i])){
  vis[vec[i]]=1;}
  else if(m2[vec[i]]>=2){
   vis[vec[i]]=1;}
  else{
   som4+=(m3[vect[i]]-1);}
  }
 for(long long int i(0);i<n;i++){
  if(vis[vect[i]]!=1){som++;}}
 cout<<(som-som4)<<endl;
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}