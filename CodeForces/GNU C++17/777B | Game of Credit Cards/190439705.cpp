#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int ans=1e7;
const long int N=1e6;
 
map<long long int,bool>vis;
map<long long int,bool>test;
 
int main()
{
 fast;
   long long int n,q,k,l,r;
   cin>>n;
   string s;
   string s1;
   cin>>s;
   cin>>s1;
   sort(s.begin(),s.end());
   sort(s1.begin(),s1.end());
   long long int som=0;long long int var=0;
   long long int som1=0;
   for(long long int i(0);i<n;i++){ 
    while(var<n){
    if(s[i]>=s1[var]){
     var++;
     }
  else{var++;som++;break;}
  }
  if(var==n)break;
   }
   var=0;
    for(long long int i(0);i<n;i++){ 
    while(var<n){
    if(s[i]>s1[var]){
     var++;
     }
  else{var++;som1++;break;}
  }
  if(var==n)break;
   }
   cout<<(n-som1)<<endl;
   cout<<som<<endl;
   
 
 
                                             
 
   
 
 
 
 
return 0;}