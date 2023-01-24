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
 cin>>s;
 vector<char>vect;
 long long int som=0;
 for(long long int i(0);i<s.length();i++){
  if(s[i]=='('){
   vect.push_back(s[i]);}
  else{
   if(not(vect.empty())){
    vect.pop_back();som+=2;}}}
  cout<<som<<endl;
 
 
 
 
 
 
 
return 0;}