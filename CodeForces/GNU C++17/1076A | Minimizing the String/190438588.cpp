#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,long long int >hashing;
map<long long int, bool>vis;
map<long long int,vector<long long int>>adj;
 
int main()
{
fast;
long long int n;
string s;
cin>>n;
cin>>s;
bool test=false;
for(long long int i(0);i<(n-2);i++){
 string val=s.substr(i,2);
 string val2=s.substr(i+1,2);
 if(val2<val){
  s.erase(i,1);
  test=true;break;}}
if(test==false){
 if(s[n-1]<s[n-2]){
  s.erase(n-2,1);}
 else{
  s.erase(n-1,1);}}
cout<<s<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}