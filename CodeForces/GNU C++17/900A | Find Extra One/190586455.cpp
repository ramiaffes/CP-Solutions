#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <long long int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
int main()
{
 fast;
 long long int n;
 long long int x,y;
 long long int som1(0);
    long long int som2(0);
 cin>>n;
 while(n--){
  cin>>x>>y;
  if(x>0){
   som1+=1;}
  else{
   som2+=1;}
  
  }
  if(n==2){
   cout<<"Yes"<<endl;}
  else{
  if((som1>1) and(som2>1)){
   cout<<"No"<<endl;}
  else{cout<<"Yes"<<endl;}}
 
 
  
 
        
 return 0;
}
 