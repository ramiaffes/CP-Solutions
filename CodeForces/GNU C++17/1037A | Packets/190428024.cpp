#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char,set<char>>adj;
map<char,bool>vis;
long long int som=0;
map<pair<char,char>,long long int>val;
map<char,long long int>dist1;
map<char,long long int>dist2;
 
int main()
{
 fast; 
  long long int n;
 string s1,s2;
 cin>>n;
 long long int i=0;
 long long int j=0;
 vector<long long int>res;
 if(n%2==1)n--;
 while(j<n){
  i=j+2;j+=i;
  res.push_back(i); }
 cout<<(res.size()+1)<<endl;
 
 
 
 
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}