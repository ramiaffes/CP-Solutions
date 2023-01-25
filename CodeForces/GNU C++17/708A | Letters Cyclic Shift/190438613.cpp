#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,long long int >hashing;
int main()
{
fast;
string s;
cin>>s;
long long int i=0;
while((i<s.length())and(s[i]=='a')){
 i++;}
if(i<s.length()){
long long int d=i;
while((d<s.length())and(s[d]!='a')){
 d++;}
d--;
 
for(long long int j(i);j<=d;j++){
 int val=s[j];
 s[j]=(char)(val-1);
 }}
else{
 s[s.length()-1]='z';}
cout<<s<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}