#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int gcd(long long int a,long long int b){
 if(b==0)return a;
 else return gcd(b,a%b); }
int main()
{
 fast; 
 long long int n,a,b,t;
 cin>>t;
 while(t--){
 cin>>n>>a>>b;
 if(((n-1)%b==0)){
  cout<<"YES"<<endl;}
 else{
 long long int p=a;
 bool test=false;
 vector<long long int>vect;
 while((p<=n)and((n-p)%b!=0)){
  vect.push_back((p%b));
  p*=a;
  if((find(vect.begin(),vect.end(),(p)%b)!=vect.end())){test=true;break;}
  }
 if((p>n)or((test==true))){
  cout<<"NO"<<endl;}
 else{
  cout<<"YES"<<endl;}
 }
 
}
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
  
 
  
  
  
  
  
  
 
 
 
  
  
  
  
 
  
  
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}