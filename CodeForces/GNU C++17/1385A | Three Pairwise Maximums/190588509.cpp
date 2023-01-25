#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast;
 int t;
 cin>>t;
 int x,y,z;
 while(t--){
  cin>>x>>y>>z;
  vector<int> tab={x,y,z};
  sort(tab.begin(),tab.end());
  if (tab[1]!=tab[2]){
   cout<<"NO"<<endl;}
  else{
   cout<<"YES"<<endl;
   cout<<tab[0]<<" "<<tab[0]<<" "<<tab[2]<<endl;
   }
 }
  
   
 
 
               
 
 
 return 0;
}