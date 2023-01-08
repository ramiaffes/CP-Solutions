#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int N=1e9; 
int main(){
 fast;
long long int a,b,c;
long long int x,y,z;
 cin>>a>>b>>c;
 cin>>x>>y>>z;
 long long int som=0;
 long long int val=0;
 if(x>a){
  som+=x-a;}
if(y>b){
 som+=y-b;}
if(z>c){
 som+=z-c;}
if((max((a-x),val)/2+max((b-y),val)/2+max((c-z),val)/2)>=som){
 cout<<"YES"<<endl;}
else cout<<"NO"<<endl;
 return 0;}