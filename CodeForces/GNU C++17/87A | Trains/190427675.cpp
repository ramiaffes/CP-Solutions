#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<long long int ,vector<long long int>>adj;
long long int gcd(long long int a, long long int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
long long int lcm(long long int a, long long int b){
 return  (a*b/gcd(a,b));}
int main()
{
 fast;
 long long int n,a,b;
 cin>>a>>b;
 long long int val=lcm(a,b)-1;
 long long int som1=val/a;
 long long int som2=val/b;
 if(som1<som2){
  som1++;}
 else som2++;
 if(som1==som2){
  cout<<"Equal"<<endl;}
 else if(som1<som2){
  cout<<"Masha"<<endl;}
 else{
  cout<<"Dasha"<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}