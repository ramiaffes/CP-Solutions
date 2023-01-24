#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char ,long long int >hashing;
map<long long int,bool>vis;
map<long long int,bool>vis1;
int main()
{
fast;
long long int n,m;
string s,t;
cin>>n>>m;
cin>>s;
cin>>t;bool test=true;
if(s==t){
 test=true;}
else{
long long int pos=s.find("*");
if(pos==string::npos){
 if(s!=t){
  test=false;}}
if(s.size()>(t.size()+1)){test=false;}
if(test==true){
long long int val=s.size()-1;
long long int val2=t.size()-1;
while(val>pos){
 if(s[val]!=t[val2]){
  test=false;break;}
 val--;
 val2--;}
if(test==true){
 val=0;
 val2=0;
 while(val<pos){
   if(s[val]!=t[val2]){
  test=false;break;}
  val++;
  val2++;
  }
 }}}
if(test==true)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}