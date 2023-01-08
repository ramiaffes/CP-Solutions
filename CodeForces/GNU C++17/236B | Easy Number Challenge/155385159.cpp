#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
int main()
{
 fast;
 long long int a,b,c;
 cin>>a>>b>>c;
 map<long long int,long long int>hashing;
 set<long long int>se;
 for(long long int i(1);i<=b;i++){
  for(long long int d(1);d<=c;d++){
    for(long long int d1(1);d1<=a;d1++){
     hashing[d*d1*i]++;
     se.insert(d*d1*i);
   }}
  }
 long long int som=0;
 for(auto v:se){
  long long int som1=0;
  long long int j=1;
     for(j=1;j*j<(v);j++){
      if((v)%j==0)som1+=2;som1=som1%1073741824;}
     if((v)==j*j){som1++;som1=som1%1073741824;}
     som+=(som1*hashing[v])%1073741824;som=som%1073741824;}
 cout<<som<<endl;
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}  