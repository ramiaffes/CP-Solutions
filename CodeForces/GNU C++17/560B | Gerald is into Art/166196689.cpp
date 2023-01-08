#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int,long long int>adj;
long long int ans=-1e5;
long long int som=0;
int main()
{
 fast; 
 long long int a,a1,a2,b1,b2,b;
 cin>>a>>b;
 cin>>a1>>b1;
 cin>>a2>>b2;
 if(((a1+a2)<=a)and(b1<=b)and(b2<=b)){
  cout<<"YES"<<endl;}
 else if(((a1+b2)<=a)and(a2<=b)and(b1<=b)){
  cout<<"YES"<<endl;}
 else if (((b1+b2)<=a)and(a2<=b)and(a1<=b)){
  cout<<"YES"<<endl;}
 else if (((a2+b1)<=a)and(a1<=b)and(b2<=b)){
  cout<<"YES"<<endl;}
 else if (((a1+a2)<=b)and(b1<=a)and(b2<=a)){
  cout<<"YES"<<endl;}
 else if (((a1+b2)<=b)and(a2<=a)and(b1<=a)){ 
  cout<<"YES"<<endl;}
 else if (((b1+b2)<=b)and(a2<=a)and(a1<=a)){
    
  cout<<"YES"<<endl;}
 
 else if (((a2+b1)<=b)and(a1<=a)and(b2<=a)){
  cout<<"YES"<<endl;}
 else cout<<"NO"<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}