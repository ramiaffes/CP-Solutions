#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
    int n,m;
    int som(0);
 cin>>n>>m;
 vector<int> vect2;
 vector<string> vect(n);
 vector<int> vect1;
 
 for(int i(0);i<n;i++){
  cin>>vect[i];
     int j=0;
  while((j<m)and(som<3)){
   if (vect[i][j]=='*'){
    vect2.push_back(i);
    vect1.push_back(j);
    som+=1;
    }j+=1;}}
  int r(0);
   while ((count(vect2.begin(),vect2.end(),vect2[r])!=1) and(r<3)){
   r++;}
   int d(0);
   while ((count(vect1.begin(),vect1.end(),vect1[d])!=1) and(d<3)){
   d++;}
  cout<<(vect2[r]+1)<<" "<<(vect1[d]+1)<<endl;
 
    
   
    
    
    return 0;
}