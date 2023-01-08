#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
int main()
{
 fast; 
 string s;
 long long int n;
 cin>>n;
 vector<long long int>vect1(6);
 vector<vector<long long int>>vect(n,vect1);
 for(long long int i(0);i<n;i++){for(long long int d(0);d<6;d++){cin>>vect[i][d];}}
 if(n==1){
  map<long long int,bool>vis;
  for(long long int i(0);i<6;i++){
   vis[vect[0][i]]=1;}
  long long int d=1;
  while(vis[d]==1){
   d++;}
  cout<<(d-1)<<endl;}
 else if(n==2){
  map<long long int,bool>vis;
  for(long long int i(0);i<6;i++){
   vis[vect[0][i]]=1;}
  for(long long int i(0);i<6;i++){
   vis[vect[1][i]]=1;}
  for(long long int i(0);i<6;i++){
   for(long long int j(0);j<6;j++){
    string res;
    string val1(1,vect[1][i]+'0');
    string val2(1,vect[0][j]+'0');
    res.append(val1);
    res.append(val2);
    vis[stoll(res)]=1;
    reverse(res.begin(),res.end());
    vis[stoll(res)]=1;}}
  long long int d=1;
  while(vis[d]==1){
   d++;}
  cout<<(d-1)<<endl;
  }
 else{
  map<long long int,bool>vis;
  for(long long int i(0);i<6;i++){
   vis[vect[0][i]]=1;}
  for(long long int i(0);i<6;i++){
   vis[vect[1][i]]=1;}
  for(long long int i(0);i<6;i++){
   vis[vect[2][i]]=1;}
  for(long long int i(0);i<6;i++){
   for(long long int j(0);j<6;j++){
    string res;
    string val1(1,vect[1][i]+'0');
    string val2(1,vect[0][j]+'0');
    res.append(val1);
    res.append(val2);
    vis[stoll(res)]=1;
    reverse(res.begin(),res.end());
    vis[stoll(res)]=1;}}
   for(long long int i(0);i<6;i++){
   for(long long int j(0);j<6;j++){
    string res;
    string val1(1,vect[2][i]+'0');
    string val2(1,vect[0][j]+'0');
    res.append(val1);
    res.append(val2);
    vis[stoll(res)]=1;
    reverse(res.begin(),res.end());
    vis[stoll(res)]=1;}}
   for(long long int i(0);i<6;i++){
   for(long long int j(0);j<6;j++){
    string res;
    string val1(1,vect[1][i]+'0');
    string val2(1,vect[2][j]+'0');
    res.append(val1);
    res.append(val2);
    vis[stoll(res)]=1;
    reverse(res.begin(),res.end());
    vis[stoll(res)]=1;}}
  for(long long int i(0);i<6;i++){
   for(long long int j(0);j<6;j++){
    for(long long int d(0);d<6;d++){
    string res1;
    string res2;
    string res3;
    string res4;
    string res5;
    string res6;
    string val1(1,vect[1][i]+'0');
    string val2(1,vect[0][j]+'0');
    string val3(1,vect[2][d]+'0');
    res1.append(val1);
    res1.append(val2);
    res1.append(val3);
    res2.append(val1);
    res2.append(val3);
    res2.append(val2);
    res3.append(val2);
    res3.append(val3);
    res3.append(val1);
    res4.append(val2);
    res4.append(val1);
    res4.append(val3);
    res5.append(val3);
    res5.append(val1);
    res5.append(val2);
    res6.append(val3);
    res6.append(val2);
    res6.append(val1);
    vis[stoll(res1)]=1;
    vis[stoll(res2)]=1;
    vis[stoll(res3)]=1;
    vis[stoll(res4)]=1;
    vis[stoll(res5)]=1;
    vis[stoll(res6)]=1;
    }}}
  long long int d=1;
  while(vis[d]==1){
   d++;}
  cout<<(d-1)<<endl;
  }
  
 
 
    
    
 
    
    
 
    
    
return 0;}