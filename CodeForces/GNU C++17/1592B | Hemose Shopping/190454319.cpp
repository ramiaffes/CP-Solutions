#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,long long int> parent;
map<long long int,long long int> hashage;
 
void make_set(long long int  v) {
    parent[v] = v;
}
 
long long int find_set(long long int v) {
    if (v == parent[v])
        return v;
    return(find_set(parent[v]));
}
 
void union_sets(long long int a, long long int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b){
        parent[b] = a;
    }
}
 
int main()
{
 fast; 
 long long int  t,x,n;
 cin>>t;
 while(t--){
  cin>>n>>x;
  bool test=true;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++)cin>>vect[i];
  vector<long long int>vect1(vect.begin(),vect.end());
  if((n-x)>=(x+1))cout<<"YES"<<endl;
  else {sort(vect1.begin(),vect1.end());
  for(long long int i(n-x);i<x;i++){
   if(vect[i]!=vect1[i]){test=false;break;}}
  if(test==false)cout<<"NO"<<endl;
  else cout<<"YES"<<endl;}
  
  
  }
  
 
 
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}