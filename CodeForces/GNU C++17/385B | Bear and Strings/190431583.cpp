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
long long int som=0;
set<pair<long long int,long long int>>se;
long long int val=0;
if(s.length()<4){
 cout<<0<<endl;}
else{
for(long long int i(0);i<(s.length()-3);i++){
 if((s[i]=='b')and(s[i+1]=='e')and(s[i+2]=='a')and(s[i+3]=='r')){
  som+=(i-val+1)*((s.length()-i-3));
  val=i+1;
  }
 }
cout<<som<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}