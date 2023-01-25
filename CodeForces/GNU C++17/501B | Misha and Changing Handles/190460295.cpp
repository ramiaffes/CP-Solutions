#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<string,string> parent;
void make_set(string v) {
    parent[v] = v;
}
 
string find_set(string v) {
    if (v == parent[v])
        return v;
    return find_set(parent[v]);
}
 
void union_sets(string a, string b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}
int main()
{
 fast; 
  int q;
 cin>>q;
 vector<string>vect(q);
 vector<string>vect1(q);
 for(int i(0);i<q;i++){
 cin>>vect[i]>>vect1[i];
 make_set(vect[i]);
 make_set(vect1[i]);}
 for(int i(0);i<q;i++){
 union_sets(vect[i],vect1[i]);}
 set<string>se;
 for(int i(0);i<q;i++){
  se.insert(find_set(vect[i]));}
 cout<<se.size()<<endl;
 for(int i(0);i<q;i++){
  if(find(vect.begin(),vect.end(),vect1[i])==vect.end()){
   cout<<parent[vect1[i]]<<" "<<vect1[i]<<endl;}}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}