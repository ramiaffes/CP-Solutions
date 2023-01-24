#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
 
int main()
{
 fast; 
 long long int x,y;
 set<long long int>se3;
 set<long long int>se4;
 vector<pair<long long int,long long int>>vec;
 for(long long int i(0);i<8;i++){
  cin>>x>>y;
  se3.insert(x);
  se4.insert(y);
  vec.push_back(make_pair(x,y));}
 if((se3.size()!=3)or(se4.size()!=3)){
  cout<<"ugly"<<endl;}
 else{
  vector<long long int>se1(se3.begin(),se3.end());
  vector<long long int>se2(se4.begin(),se4.end());
  sort(se1.begin(),se1.end());
  sort(se2.begin(),se2.end());
  bool test=true;
  for(auto v:se1){
   for(auto u:se2){
    if((find(vec.begin(),vec.end(),make_pair(v,u))==vec.end())and(not((v==se1[1])and(u==se2[1])))){
     test=false;break;}}if(test==false)break;}
  if(test==false)cout<<"ugly"<<endl;
  else cout<<"respectable"<<endl;}
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}