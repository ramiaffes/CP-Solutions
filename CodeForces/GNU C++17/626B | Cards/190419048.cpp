#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<string,set<char>>dp;
bool test=false;
int main()
{
 fast;
 long long int n;
 string s;
 cin>>n;
 cin>>s;
 map<char,long long int>hashing;
 for(long long int i(0);i<s.length();i++){
  hashing[s[i]]++;}
if((hashing['B']==0)and(hashing['R']==0)){
 cout<<'G';}
else if ((hashing['B']==0)and(hashing['G']==0)){
 cout<<'R';}
else if ((hashing['R']==0)and(hashing['G']==0)){
 cout<<'B';}
else if(hashing['R']==0){
 hashing['B']--;
 hashing['G']--;if(hashing['G']>=1)cout<<'B';
 if(hashing['B']>=1)cout<<'G';
  cout<<'R';
 
 
  }
 
 
  
 
else if(hashing['B']==0){
 hashing['R']--;
 hashing['G']--;
 cout<<'B';
 if(hashing['R']>=1)cout<<'G';
 if(hashing['G']>=1)cout<<'R';
 }
  
 
else if(hashing['G']==0){
 hashing['R']--;
 hashing['B']--;
 if(hashing['R']>=1)cout<<'B';cout<<'G';
 if(hashing['B']>=1)cout<<'R';
  
 } 
 
else{
 cout<<"BGR"<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}