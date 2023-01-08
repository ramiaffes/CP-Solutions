#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}return p;}
set<pair<long long int,long long int>>res;
bool test=false;
 
int main()
{
 fast; 
 string s;
 long long int n,k,t;
    cin>>n;
    vector<long long int>vect(n);
    map<long long int,long long int>hashing;
    set<long long int>se;
    for(long long int i(0);i<n;i++){cin>>vect[i];hashing[vect[i]]++;se.insert(vect[i]);}
    int test=0;
    set<long long int>se1;
    set<long long int>se2;
    for(auto v:se){
  if(hashing[v]==1){
   if(test==0){
    se1.insert(v);}
   else{se2.insert(v);}
   test=1-test;}}
 if(se1.size()==se2.size()){
  string str(n,' ');
  for(long long int i(0);i<n;i++){
   if(find(se1.begin(),se1.end(),vect[i])!=se1.end()){
    str[i]='A';}
   else if(find(se2.begin(),se2.end(),vect[i])!=se2.end()){
    str[i]='B';}
   else{str[i]='B';}}
  cout<<"YES"<<endl;
  cout<<str<<endl;
  }
 else{
  bool test=false;
  long long int val;
  for(auto v:se){
   if(hashing[v]>2){val=v;test=true;break;}}
  if(test==false){
   cout<<"NO"<<endl;}
  else{
   long long int som33=0;
   if(se1.size()<se2.size()){
   string str(n,' ');
  for(long long int i(0);i<n;i++){
   if(find(se1.begin(),se1.end(),vect[i])!=se1.end()){
    str[i]='A';}
   else if(find(se2.begin(),se2.end(),vect[i])!=se2.end()){
    str[i]='B';}
   else if((vect[i]==val)and(som33==0)){str[i]='A';som33++;}
   else{str[i]='B';}}
   cout<<"YES"<<endl;
   cout<<str<<endl;}
   else{
    string str(n,' ');
  for(long long int i(0);i<n;i++){
   if(find(se1.begin(),se1.end(),vect[i])!=se1.end()){
    str[i]='A';}
   else if(find(se2.begin(),se2.end(),vect[i])!=se2.end()){
    str[i]='B';}
   else if((vect[i]==val)and(som33==0)){str[i]='B';som33++;}
   else{str[i]='A';}}cout<<"YES"<<endl;
   cout<<str<<endl;}
   
   }
 
  
  }
 
 
    
    
return 0;} 