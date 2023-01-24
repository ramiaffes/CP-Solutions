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
 long long int a,b,c,t;
    cin>>t;
    while(t--){
  cin>>a>>b>>c;
  cout<<(c+b+a)<<" "<<(c+b)<<" "<<c<<endl;
  }
  
 
    
    
 
    
    
 
    
    
return 0;} 