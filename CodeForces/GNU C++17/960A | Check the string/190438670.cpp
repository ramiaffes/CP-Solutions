#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char ,long long int >hashing;
int main()
{
fast;
string s;
cin>>s;
if(!(is_sorted(s.begin(),s.end()))){
 cout<<"NO"<<endl;}
else{
for(long long int i(0);i<s.length();i++){
 hashing[s[i]]++;}
if((hashing['a']!=0)and(hashing['b']!=0)and((hashing['c']==hashing['b'])or(hashing['c']==hashing['a']))){
 cout<<"YES"<<endl;}
else{
 cout<<"NO"<<endl;}
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}