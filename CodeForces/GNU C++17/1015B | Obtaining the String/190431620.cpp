#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,long long int >hashing;
int main()
{
fast;
long long int n;
string t;
string s;
cin>>n;
cin>>s;
cin>>t;
 
vector<long long int>res;
string t1(t.begin(),t.end());
string s1(s.begin(),s.end());
sort(t1.begin(),t1.end());
sort(s1.begin(),s1.end());
if(s1!=t1){
 cout<<-1<<endl;}
else{
 for(long long int i(0);i<n;i++){
  if(s[i]!=t[i]){
   long long int j=n-1;
   while((j>i)and(s[j]!=t[i])){j--;}
   for(long long int d(j-1);d>=i;d--){
    res.push_back(d+1);
    swap(s[d],s[d+1]);}
   }}
cout<<res.size()<<endl;
for(auto v:res){
 cout<<v<<" ";}}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}