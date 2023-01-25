#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
int main()
{
 fast; 
 int t,n,m,x,y,z,d; 
 
 cin>>t;
 while(t--){
  cin>>n;
  cin>>m;
  bool boo(false);
 for(int i(0);i<n;i++){
  cin>>x;
  cin>>y;
  cin>>z;
  cin>>d;
  if(y==z){
   boo=true;}
  }
 if (m%2==1){
  cout<<"no"<<endl;}
 else{
 cout<<(boo? "yes":"no");
 cout<<endl;
 }}
  
  
  
  
  
 
 
 
 
 
  
  
  
 
 
 
 return 0;
}
 