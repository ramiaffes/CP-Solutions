#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<char,long long int>hashing;
map<long long int,long long int>hashing1;
bool test=true;vector<string> out;
map<long long int,bool>vis;
int main()
{
 fast;
string s;
long long int m,d;
cin>>s;
cin>>m;
long long int n=s.length();
for(long long int i(0);i<m;i++){
 cin>>d;
 vis[d-1]=1-vis[d-1];}
long long int i=0;
long long int j=n-1;
while(i<j){
 if(vis[i]==1){
  swap(s[i],s[j]);}
 if(vis[i]==1){
  vis[i+1]=1-vis[i+1];}
 i++;
 j--;}
cout<<s<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}