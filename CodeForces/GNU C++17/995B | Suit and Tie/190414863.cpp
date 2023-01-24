#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
int main()
{
 fast; 
 string s;
 long long int n,b,x,y,t;
    cin>>n;
    vector<long long int>vect(2*n);
    vector<long long int>res1;
    map<long long int,bool>vis;
    for(long long int i(0);i<(2*n);i++){cin>>vect[i];if(vis[vect[i]]==0){res1.push_back(vect[i]);vis[vect[i]]=1;}} long long int res=0;
    for(auto v:res1){
  long long int j=2*n;
  while(vect[j]!=v){j--;}
  long long int d=0;
  while(vect[d]!=v){d++;}
  while(d<j){
    swap(vect[j],vect[j-1]);
    j--;
    res++;
   }
  res--;
  }
 cout<<res<<endl;
    
    
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}