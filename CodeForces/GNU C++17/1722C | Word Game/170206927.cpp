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
 long long int n,t;
 cin>>t;
 string s;
 while(t--){
  cin>>n;
  map<string,long long int>hashing;
  vector<string>vect(n);
  vector<string>vect1(n);
  vector<string>vect2(n);
  for(long long int i(0);i<n;i++){
  cin>>vect[i];
  hashing[vect[i]]++;
  }
  for(long long int i(0);i<n;i++){
  cin>>vect1[i];
  hashing[vect1[i]]++;
  }
  for(long long int i(0);i<n;i++){
  cin>>vect2[i];
  hashing[vect2[i]]++;
  }
  long long int som=0;
 for(int i(0);i<n;i++){
  if(hashing[vect[i]]==1){
   som+=3;}
  else if(hashing[vect[i]]==2){
   som+=1;}
  else som+=0;}
 cout<<som<<" ";
 som=0;
 for(int i(0);i<n;i++){
  if(hashing[vect1[i]]==1){
   som+=3;}
  else if(hashing[vect1[i]]==2){
   som+=1;}
  else som+=0;}
 cout<<som<<" ";
 som=0;
 for(int i(0);i<n;i++){
  if(hashing[vect2[i]]==1){
   som+=3;}
  else if(hashing[vect2[i]]==2){
   som+=1;}
  else som+=0;}
 cout<<som<<endl;
   
 }
 
 
 
    
    
return 0;}
 