#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int ans=1e7;
const long int N=1e6;
 
 
int main()
{
 fast;
   long long int n;
   string a,b;
   cin>>n;
   cin>>a>>b;
   long long int som1=0;
   long long int som2=0;
   long long int som=0;
   string a2(a);
   string a1(a);
   for(long long int i(0);i<(n-1);i++){
    if(((a[i]!=b[i])and(a[i+1]!=b[i+1]))and(make_pair(a[i],a[i+1])==make_pair(b[i+1],b[i]))){
     swap(a[i],a[i+1]);
     som++;}}
for(long long int i(0);i<n;i++){
 if(a[i]!=b[i]){
  som++;}}
   cout<<som<<endl;
   
 
 
 
 
return 0;}