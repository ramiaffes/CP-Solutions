#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,bool>vis;
int main()
{
 fast;
 long long int n,m;
 string s;
 cin>>n;
 while(n>3){
  s.append("1");
  n-=2;}
if(n==3){
 s.append("7");
 reverse(s.begin(),s.end());}
else{
 s.append("1");}
cout<<s<<endl;
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}