 
#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
 long long int a,b,som;
   som=0;
   cin>>a>>b;
   while ((a!=0)and(b!=0)){
    if ((a==b)and(a==1)){
     break;}
    if(a<b){
     a+=1;
     b-=2;
     som++;}
    else{
     b+=1;
     a-=2;
     som++;}}
  cout<<som<<endl;
   
   
  
    return 0;
}