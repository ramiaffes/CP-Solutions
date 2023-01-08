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
 long long int n,k,u,v;
 cin>>n;
 vector<long long int>vect(n);
 map<long long int,vector<long long int>>hashing;
 for(long long int i(0);i<n;i++)cin>>vect[i];
 for(long long int i(0);i<n;i++){
  hashing[vect[i]].push_back(i+1);}
 bool test=false;
 long long int som=0;
 long long int som1=0;
 for(auto v:hashing){
  if(v.second.size()>=2)som++;
  if(v.second.size()>=3)som1++;
  if((som>=2)or(som1>=1)){test=true;}}
 if(test==false){
  cout<<"NO"<<endl;}
 else{
  vector<long long int>vect1;
  vector<long long int>vect2;
  vector<long long int>vect3;
  if(som1>=1){
   for(auto v:hashing){
    if(v.second.size()<=2){
     for(auto v1:v.second){
      vect1.push_back(v1);
      vect2.push_back(v1);
      vect3.push_back(v1);}}
  else{
   vect1.push_back((v.second)[0]);
   vect1.push_back((v.second)[1]);
   vect1.push_back((v.second)[2]);
   vect2.push_back((v.second)[1]);
   vect2.push_back((v.second)[2]);
   vect2.push_back((v.second)[0]);
   vect3.push_back((v.second)[2]);
   vect3.push_back((v.second)[1]);
   vect3.push_back((v.second)[0]);
   for(long long int i(3);i<v.second.size();i++){
    vect1.push_back((v.second)[i]);
    vect2.push_back((v.second)[i]);
    vect3.push_back((v.second)[i]);
    }
   }}}
  else{
   long long int som2=0;
   for(auto v:hashing){
   if(v.second.size()==1){
    for(auto v1:v.second){
     vect1.push_back(v1);
     vect2.push_back(v1);
     vect3.push_back(v1);
     }continue;}
   if((som2==1)and(v.second.size()==2)){
    vect2.push_back((v.second)[0]);
    vect3.push_back((v.second)[1]);
    vect2.push_back((v.second)[1]);
    vect3.push_back((v.second)[0]);
    vect1.push_back((v.second)[1]);
    vect1.push_back((v.second)[0]);
    }
   else if(v.second.size()==2){
    vect1.push_back((v.second)[1]);
    vect1.push_back((v.second)[0]);
    vect3.push_back((v.second)[0]);
    vect3.push_back((v.second)[1]);
    vect2.push_back((v.second)[1]);
    vect2.push_back((v.second)[0]);
    som2++;
    }
  
  }}
 
cout<<"YES"<<endl;
for(long long int i(0);i<n;i++){
 cout<<vect1[i]<<" ";}
cout<<endl;
 for(long long int i(0);i<n;i++){
 cout<<vect2[i]<<" ";}
cout<<endl;
for(long long int i(0);i<n;i++){
 cout<<vect3[i]<<" ";}
cout<<endl;
 
}
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}