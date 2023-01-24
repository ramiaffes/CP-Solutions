#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast;
 
string s;
long long int n,k;
cin>>n>>k;
cin>>s;
set<char>res;
for(long long int i(0);i<n;i++){
 res.insert(s[i]);}char val=*(min_element(res.begin(),res.end()));
if(n<k){
 for(long long int i(n);i<k;i++){
  string var(1,val);
  s.append(var);}
 cout<<s<<endl; }
else{
k--;
long long int k1=k;
 
while((k>=0)){
 auto it =upper_bound(res.begin(),res.end(),s[k]);
 if(it==res.end()){k--;}
 else {s[k]=(*it);for(long long int i(k+1);i<=k1;i++){s[i]=(val);}break;}
 }
cout<<s.substr(0,k1+1)<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}