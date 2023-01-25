#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
long long int gcd(long long int a,long long int b){
 if(b==0)return a;
 else return gcd(b,a%b); }
long long int ppcm(long long int a,long long int b){
 return(a*b)/gcd(a,b);}
map<long long int,long long int> parent; 
map<long long int,bool> happ; 
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
 long long int n,m,b,g; 
 cin>>n>>m;
 cin>>b;
 vector<long long int>vect(b);
 for(long long int i(0);i<b;i++){
  cin>>vect[i];
  happ[vect[i]]=1;}
 cin>>g;
 vector<long long int>vect1(g);
  for(long long int i(0);i<g;i++){
  cin>>vect1[i];
  happ[vect1[i]+n]=1;
  }
 for(long long int i(0);i<(n+m);i++){
  make_set(i);}
 for(long long int i(0);i<(ppcm(n,m));i++){
  if((happ[find_set(i%n)]==1)or(happ[find_set(i%m+n)]==1)){
   happ[find_set(i%n)]=1;
   happ[find_set(i%m+n)]=1;
   }union_sets(i%n,i%m+n);}
   
 bool test=true;
 for(long long int i(0);i<(n+m);i++){
  if(happ[find_set(i)]!=1){test=false;break;}}
 if(test==false)cout<<"NO"<<endl;
 else cout<<"Yes"<<endl;
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}