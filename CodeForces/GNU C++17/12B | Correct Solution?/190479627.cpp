#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 string n, m;
 cin>>n>>m;
if((n=="0")and(m=="0"))cout<<"OK"<<endl;
else{
 sort(n.begin(),n.end());
 if(n.rfind('0')==string::npos){
  if(n==m)cout<<"OK"<<endl;
  else cout<<"WRONG_ANSWER"<<endl;
}
else
{
 long long int res=n.rfind('0')+1;
 while(res!=0){
  swap(n[res],n[res-1]);
  res--;}
 if(n==m)cout<<"OK"<<endl;
  else cout<<"WRONG_ANSWER"<<endl;}}
 
 
 
 
 
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}