#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,long long int >hashing;
int main()
{
fast;
string x;
cin>>x;
for(int i(0);i<x.length();i++){
 int var=x[i]-'0';
 if(var>(9-var)){
  x[i]=(9-var)+'0';}}
if(x[0]=='0'){
 x[0]='9';}
cout<<x<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}