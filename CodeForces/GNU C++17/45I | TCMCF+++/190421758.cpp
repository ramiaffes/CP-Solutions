#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>adj;
long long int som=0;
long long int val=0;
 
 
int main()
{
 fast; 
 long long int n,k;
 string s,s2;
 cin>>n;
 vector<long long int>vect(n);
 bool test=false;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  }
 sort(vect.begin(),vect.end());
 auto it1=upper_bound(vect.begin(),vect.end(),0);
 auto it2=lower_bound(vect.begin(),vect.end(),0);
 if((it1==vect.end())and(it2==vect.begin())){
  cout<<0<<endl;
  }
 else if((it1==vect.end())and(it2!=vect.end())){
  long long int val1=it2-vect.begin();
  if((val1%2==1)){val1--;}
 if(val1>=1){
   for(long long int i(0);i<val1;i++){
    cout<<vect[i]<<" ";}}
  else{
   cout<<0<<endl;}
  }
 else if(it2==vect.begin()){
  long long int val2=it1-vect.begin();
  for(long long int i(val2);i<n;i++){
   cout<<vect[i]<<" ";}}
 else if(it2==vect.end()){
  long long int val1=it2-vect.begin();
  if((val1>=2)and(val1%2==1)){val1--;}
  for(long long int i(0);i<val1;i++){
    cout<<vect[i]<<" ";}
  }
 else{long long int val1=it2-vect.begin();
  if(val1%2==1){val1--;}
   for(long long int i(0);i<val1;i++){
    cout<<vect[i]<<" ";}
   long long int val2=it1-vect.begin();
  for(long long int i(val2);i<n;i++){
   cout<<vect[i]<<" ";}
  
  }
 
 
 
 
 
 
 
 
 
 
return 0;}