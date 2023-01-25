#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
    long long int t;
    string s;
 
  cin>>t;
  while(t--){
   cin>>s;
   long long int som1=0;
   long long int som2=0;
   long long int p=0;
   long long int n=s.length();
   long long int result=0;
   long long int max1=0;
   long long int max2=0;
   for(long long int i(0);i<n;i++){
    if(s[i]=='['){
     som1+=1;}
    else if (s[i]==']'){
     p=1;
     som1-=1;}
    else if(s[i]=='('){
      som2+=1;}
    else if(s[i]==')'){
     p=2;
     som2-=1;}
    if(som1<0){
     som1=0;}
    if(som2<0){
     som2=0;
     }
    if ((som1>max1)and(som1>=0)){
     max1=som1;}
    if((som2>max2)  and(som2>=0)){
     max2=som2;}
    if ((som1<max1) and(som1>=0) and(p==1)){
     result+=1;
     max1=som1;}
    else if((som2<max2) and(som2>=0)and(p==2)){
     result+=1;
     max2=som2;}
    else{result=result;}
   
    }
    cout<<result<<endl;}
   
   
  
  
    return 0;
}