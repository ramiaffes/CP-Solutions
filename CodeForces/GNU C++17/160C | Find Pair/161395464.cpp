#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<long long int ,vector<long long int>>adj;
long long int val=0;
map<long long int,bool>vis;
map<long long int,bool>vis1;
map<long long int,long long int>parent;
long long int som=0;
map<long long int,long long int>var;
map<long long int,long long  int>hashing;
bool test=false;
int main()
{
 fast; 
 long long int n,k;
 cin>>n>>k;
 vector<long long int>vect(n);map<long long int,long long int>hashing;
 for(long long int i(0);i<n;i++){cin>>vect[i];hashing[vect[i]]++;}
 sort(vect.begin(),vect.end());
 vector<long long int>vect1(vect.begin(),vect.end());
 auto ip = unique(vect.begin(), vect.end());
 long long int som=0;
    vect.resize(distance(vect.begin(), ip));
    long long int val=0;
    for(long long int i(0);i<vect.size();i++){
  som+=hashing[vect[i]]*(n);
  if(som>=k){
   val=vect[i];}
  if(som>k){
   som-=hashing[vect[i]]*(n);break;}
  if(som==k)break;}
 if(som==k){
  cout<<val<<" "<<vect1[n-1]<<endl;}
 else{
 bool test=false;
 long long int val1=0;
 for(long long int i(0);i<n;i++){
  som+=hashing[val];
  if(som>=k){
   val1=vect1[i];break;}
  }
cout<<val<<" "<<val1<<endl;}
 
    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}