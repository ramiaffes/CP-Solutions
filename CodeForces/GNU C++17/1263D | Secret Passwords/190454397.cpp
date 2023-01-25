#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char,char> parent;
map<char,bool>vis;
 
void make_set(char  v) {
    parent[v] = v;
}
 
char find_set(char v) {
    if (v == parent[v])
        return v;
    return(find_set(parent[v]));
}
 
void union_sets(char a, char b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b){
        parent[b] = a;
    }
}
 
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<string>vect(n);
 set<char>res;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  }
 for(long long int i(0);i<n;i++){
  for(long long int j(0);j<vect[i].size();j++){
   if(vis[vect[i][j]]==0){
    make_set(vect[i][j]);
    vis[vect[i][j]]=1;}
   }
  for(long long int j(0);j<(vect[i].size()-1);j++){
   union_sets(vect[i][j],vect[i][j+1]);}
 }
 long long int var=97;
 long long int cnt=0;
 for(long long int i(0);i<26;i++){
  char d=(char)(var+i);
  if(vis[d]){
   if(find_set(d)==d)cnt++;}}
 cout<<cnt<<endl;
 
 
 
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}