#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}return p;}
set<pair<long long int,long long int>>res;
bool test=false;
 
int main()
{
 fast; 
 string s;
 long long int n,m;
 cin>>n;long long int som=0;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){cin>>vect[i];som+=vect[i];}
 if(som!=0){
  cout<<"YES"<<endl;
  cout<<1<<endl;
  cout<<1<<" "<<(n)<<endl;
  cout<<endl;}
 else{
  long long int i=0;
  while((i<n)and(vect[i]==0))i++;
  if(i==n){
   cout<<"NO"<<endl;}
  else{
   cout<<"YES"<<endl;
   cout<<2<<endl;
   cout<<1<<" "<<(i+1)<<endl;
   cout<<(i+2)<<" "<<n<<endl;}}
 
 
    
    
 
    
    
 
    
    
return 0;} 