#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,long long int >hashing;
map<long long int,bool>vis;
map<long long int,bool>vis1;
int main()
{
fast;
long long int n,t;
cin>>n;
vector<long long int>vect(n);
for(long long int i(0);i<n;i++){cin>>vect[i];vis1[vect[i]]=1;}
vector<long long int>vect1;
for(long long  int i(0);i<n;i++){
 if(vis1[i+1]==0){
  vect1.push_back(i+1);}}
long long int val=0;
for(long long int i(0);i<n;i++){
 if((vis[vect[i]]==1)or(vect[i]>n)){
  vect[i]=vect1[val];
  vis[vect1[val]]=1;
  val++;}
 else{
  vis[vect[i]]=1;}}
for(long long int i(0);i<n;i++){
 cout<<vect[i]<<" ";}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}