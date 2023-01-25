#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char,bool>vis;
map<char,vector<char>>adj;
int main()
{
fast;
string c1;
string c2;
string c3;
cin>>c1;
cin>>c2;
cin>>c3;
if(c1[1]=='>'){
 adj[c1[0]].push_back(c1[2]);}
else{
 adj[c1[2]].push_back(c1[0]);}
 if(c2[1]=='>'){
 adj[c2[0]].push_back(c2[2]);}
else{
 adj[c2[2]].push_back(c2[0]);}
 if(c3[1]=='>'){
 adj[c3[0]].push_back(c3[2]);}
else{
 adj[c3[2]].push_back(c3[0]);}
vector<long long int>res(3);
res[0]=adj['A'].size();
res[1]=adj['B'].size();
res[2]=adj['C'].size();
sort(res.begin(),res.end());
if((res[0]!=0)or(res[1]!=1)or(res[2]!=2)){cout<<"Impossible"<<endl;}
else{
 string ch(3,' ');
 for(long long int i(0);i<3;i++){
  if(res[i]==adj['A'].size()){
   ch[i]='A';}
  if(res[i]==adj['B'].size()){
   ch[i]='B';}
  if(res[i]==adj['C'].size()){
   ch[i]='C';}
   }
  cout<<ch<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}