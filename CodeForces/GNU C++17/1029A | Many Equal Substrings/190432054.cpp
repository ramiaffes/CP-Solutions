#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int ans=1e4;
map<long long int ,long long int>hashing;
int main()
{
 fast;
 
 long long int n,p,q,k;
 string s;
 string t;
 cin>>n>>k;
 cin>>s;
 vector<string>res;
 for(long long int i(1);i<=n;i++){
  res.push_back(s.substr(0,i));}
string val=s;
string val2=s;
bool test=false;
for(long long int i(1);i<n;i++){
 if(find(res.begin(),res.end(),s.substr(i,n-i))!=res.end()){
  val2=s.substr(i,n-i);
  test=true;
  break;}}
if(test==true){
for(long long int i(1);i<=n;i++){
 if(val2==s.substr(0,i)){
  val=s.substr(i,n-i);}}}
if(val==s){
 for(long long int i(0);i<k;i++){
 t.append(s);}}
else{
 t.append(s);
 for(long long int i(0);i<(k-1);i++){
 t.append(val);}
 }
cout<<t<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}