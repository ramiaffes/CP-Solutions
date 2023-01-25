#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
bool verif( int u){
 string v=to_string(u);
 sort(v.begin(),v.end());
  int i=0;
 bool test=false;
 int num=v.length();
 while(i<(num-1)){
  test=(v[i]==v[i+1]);
  i++;
 if(test==true)break;}
 return !(test);
 }
int main()
{
 fast; 
  int y;
 cin>>y;
 y++;
 while(!verif(y)){
  y++;}
 cout<<y<<endl;
 
 
  
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}