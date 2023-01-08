#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
int main()
{
 fast; 
 string s;
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 long long int som=0;
 for(long long int i(0);i<n;i++){cin>>vect[i];som+=vect[i];}
 long long int som1=0;
 for(long long int i(0);i<n;i++){
  som1+=vect[i];
  if(som1>=(som/2+(som%2))){cout<<(i+1)<<endl;break;}}
 
  
 
 
    
    
 
    
    
 
    
    
return 0;}