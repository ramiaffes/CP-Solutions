#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
 long long int t,n,k;
 cin>>t;
 while(t--){
 cin>>n>>k;
 string s(n,' ');
 for(long long int i(0);i<n;i++){
 if(i%3==0){
  s[i]='a';}
 else if(i%3==1){
  s[i]='b';}
 else{
  s[i]='c';}
  
 }
 cout<<s<<endl;
 }
  
 
   
   
  
    return 0;
}