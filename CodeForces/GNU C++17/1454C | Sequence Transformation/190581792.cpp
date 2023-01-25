#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
 long long int t,n;
 string s;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];}
  vector<long long int>::iterator it;
        it = unique (vect.begin(), vect.end());
        vect.resize( distance(vect.begin(),it)); 
        if(vect.size()==1){
   cout<<0<<endl;}
  else{
        long long int begin=vect[0];
        long long int end=vect[n-1];
        sort(vect.begin(),vect.end());
        long long int som=1;
        long long int min=vect.size();
        for(long long int i(0);i<(vect.size()-1);i++){
   if(vect[i]==vect[i+1]){
    som++;
    }
   else{
    if ((vect[i]==begin)and(begin==end)){
     som-=1;}
     else if(((vect[i]==begin))or((vect[i]==end))){
     som=som;}
    else{
     som+=1;}
    if(som<min){
     min=som;}
    som=1;}}
    if ((vect[vect.size()-1]==begin)and(begin==end)){
     som-=1;}
    else if(((vect[vect.size()-1]==begin))or((vect[vect.size()-1]==end))){
     som=som;}
    else{
     som+=1;}
    if(som<min){
     min=som;}
    cout<<(min)<<endl;}
     }
  
  
  
 
   
   
  
    return 0;
}